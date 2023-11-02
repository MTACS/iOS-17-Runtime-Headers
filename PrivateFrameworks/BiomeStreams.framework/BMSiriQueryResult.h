
@interface BMSiriQueryResult : NSObject <BMProtoBufWrapper, BMStoreData, BMStreamValidating, NSSecureCoding> {
    double  _confidence;
    NSString * _domain;
    NSString * _qid;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domain;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *qid;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (unsigned int)dataVersion;
- (id)domain;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithQID:(id)arg1 domain:(id)arg2 confidence:(double)arg3;
- (bool)isCompleteWithContext:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isValidWithContext:(id)arg1 error:(id*)arg2;
- (id)json;
- (id)jsonDict;
- (id)proto;
- (id)qid;
- (id)serialize;

@end
