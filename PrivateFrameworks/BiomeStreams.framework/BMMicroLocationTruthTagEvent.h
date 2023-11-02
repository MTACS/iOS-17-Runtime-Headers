
@interface BMMicroLocationTruthTagEvent : NSObject <BMProtoBufWrapper, BMStoreData> {
    double  _absoluteTimestamp;
    NSString * _clientBundleIdentifier;
    NSUUID * _recordingRequestIdentifier;
    NSUUID * _truthTagIdentifier;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly, copy) NSString *clientBundleIdentifier;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *recordingRequestIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *truthTagIdentifier;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)clientBundleIdentifier;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (unsigned long long)hash;
- (id)initWithAbsoluteTimestamp:(double)arg1 clientBundleIdentifier:(id)arg2 truthTagIdentifier:(id)arg3 recordingRequestIdentifier:(id)arg4;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)proto;
- (id)recordingRequestIdentifier;
- (id)serialize;
- (id)truthTagIdentifier;

@end
