
@interface BMPersonalInferenceEvent : NSObject <BMProtoBufWrapper, BMStoreData> {
    NSNumber * _confidence;
    BMPersonalFact * _fact;
    unsigned int  _modelVersion;
    NSArray * _qualifiers;
}

@property (nonatomic, readonly) NSNumber *confidence;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BMPersonalFact *fact;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int modelVersion;
@property (nonatomic, readonly) NSArray *qualifiers;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)confidence;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (id)fact;
- (id)initWithFact:(id)arg1 modelVersion:(unsigned int)arg2 confidence:(id)arg3 qualifiers:(id)arg4;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (unsigned int)modelVersion;
- (id)proto;
- (id)qualifiers;
- (id)serialize;

@end
