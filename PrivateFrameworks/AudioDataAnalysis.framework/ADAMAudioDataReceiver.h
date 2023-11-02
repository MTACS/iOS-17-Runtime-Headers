
@interface ADAMAudioDataReceiver : NSObject <ADAMClientDelegate> {
    NSMutableDictionary * _callbacks;
    NSMutableDictionary * _configs;
    NSXPCConnection * _connection;
    bool  _connectionDidInvalidate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    NSMutableDictionary * _sensorStatus;
    <ADAMAudioDataReceiverDelegate> * delegate;
}

@property bool connectionDidInvalidate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ADAMAudioDataReceiverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureAudioSampleType:(unsigned int)arg1 configuration:(id)arg2;
- (bool)connectionDidInvalidate;
- (void)dealloc;
- (id)delegate;
- (id)getCurrentConfigurationForAudioSampleType:(unsigned int)arg1;
- (void)handleAndLogError:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isMeasurementOnForAudioSampleType:(unsigned int)arg1;
- (void)receiveAudioSample:(id)arg1;
- (void)receiveAudioSample:(id)arg1 type:(unsigned int)arg2 metadata:(id)arg3;
- (void)reconnect;
- (void)reset;
- (void)setConnectionDidInvalidate:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (id)setupConnection;
- (void)startMeasuringAudioSampleType:(unsigned int)arg1 withConfiguration:(id)arg2;
- (void)startReceivingAudioSampleType:(unsigned int)arg1;
- (void)startReceivingAudioSampleType:(unsigned int)arg1 withCallback:(id /* block */)arg2;
- (void)stopMeasuringAudioSampleType:(unsigned int)arg1;
- (void)stopReceivingAudioSampleType:(unsigned int)arg1;
- (bool)verifyInvariants;

@end
