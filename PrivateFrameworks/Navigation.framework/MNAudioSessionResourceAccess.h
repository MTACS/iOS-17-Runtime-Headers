
@interface MNAudioSessionResourceAccess : NSObject {
    <MNAudioSessionAccessDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _state;
}

@property (nonatomic) <MNAudioSessionAccessDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long promptStyle;
@property (nonatomic, readonly) unsigned long long state;

+ (bool)deviceSpeakerIsInUse;
+ (bool)headphonesAreInUse;

- (void).cxx_destruct;
- (void)_changeNumChannels;
- (id)_stringForAVAudioSessionErrorCode:(long long)arg1;
- (bool)activate;
- (bool)deactivate;
- (id)delegate;
- (id)init;
- (unsigned long long)promptStyle;
- (void)setDelegate:(id)arg1;
- (unsigned long long)state;
- (bool)updatePropertiesWithOptions:(id)arg1 forTransportType:(int)arg2 error:(out id*)arg3;

@end
