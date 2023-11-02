
@interface BMMicroLocationProbabilityPerLabel : NSObject <BMProtoBufWrapper, BMStoreData> {
    NSUUID * _labelIdentifier;
    double  _probability;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *labelIdentifier;
@property (nonatomic, readonly) double probability;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (unsigned long long)hash;
- (id)initWithLabelIdentifier:(id)arg1 probability:(double)arg2;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)labelIdentifier;
- (double)probability;
- (id)proto;
- (id)serialize;

@end
