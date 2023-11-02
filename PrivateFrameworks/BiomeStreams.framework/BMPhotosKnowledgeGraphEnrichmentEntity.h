
@interface BMPhotosKnowledgeGraphEnrichmentEntity : NSObject <BMProtoBufWrapper, BMStoreData, BMStreamValidating, NSSecureCoding> {
    unsigned int  _category;
    NSString * _language;
    NSString * _name;
    double  _score;
}

@property (nonatomic, readonly) unsigned int category;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double score;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)category;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 score:(double)arg2 language:(id)arg3 category:(unsigned int)arg4;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isCompleteWithContext:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isValidWithContext:(id)arg1 error:(id*)arg2;
- (id)json;
- (id)jsonDict;
- (id)language;
- (id)name;
- (id)proto;
- (double)score;
- (id)serialize;

@end
