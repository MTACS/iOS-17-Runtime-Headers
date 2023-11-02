
@interface BMPhotosKnowledgeGraphEnrichmentLocation : NSObject <BMProtoBufWrapper, BMStoreData, BMStreamValidating, NSSecureCoding> {
    NSString * _city;
    NSString * _country;
    NSData * _encodedLocation;
    NSString * _state;
    NSString * _street;
}

@property (nonatomic, readonly) NSString *city;
@property (nonatomic, readonly) NSString *country;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSData *encodedLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *state;
@property (nonatomic, readonly) NSString *street;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)city;
- (id)country;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedLocation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithStreet:(id)arg1 city:(id)arg2 state:(id)arg3 country:(id)arg4 encodedLocation:(id)arg5;
- (bool)isCompleteWithContext:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isValidWithContext:(id)arg1 error:(id*)arg2;
- (id)json;
- (id)jsonDict;
- (id)proto;
- (id)serialize;
- (id)state;
- (id)street;

@end
