
@interface BMMicroLocationRestrictedLocalizationEvent : NSObject <BMProtoBufWrapper, BMStoreData> {
    double  _absoluteTimestamp;
    NSString * _clientBundleIdentifier;
    double  _maxProbability;
    NSUUID * _maxProbabilityLabelIdentifier;
    NSArray * _numDevicesVector;
    NSArray * _probabilityVector;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly, copy) NSString *clientBundleIdentifier;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double maxProbability;
@property (nonatomic, readonly, copy) NSUUID *maxProbabilityLabelIdentifier;
@property (nonatomic, readonly) NSArray *numDevicesVector;
@property (nonatomic, readonly) NSArray *probabilityVector;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)clientBundleIdentifier;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (unsigned long long)hash;
- (id)initWithAbsoluteTimeStamp:(double)arg1 clientBundleIdentifier:(id)arg2 maxProbabilityLabelIdentifier:(id)arg3 maxProbability:(double)arg4 probabilityVector:(id)arg5 numDevicesVector:(id)arg6;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)maxProbability;
- (id)maxProbabilityLabelIdentifier;
- (id)numDevicesVector;
- (id)probabilityVector;
- (id)proto;
- (id)serialize;

@end
