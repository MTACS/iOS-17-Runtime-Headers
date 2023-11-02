
@interface BMProactiveHarvestingPhotosKnowledgeGraphEnrichmentLocation : BMEventBase <BMStoreData> {
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

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)city;
- (id)country;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodedLocation;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithStreet:(id)arg1 city:(id)arg2 state:(id)arg3 country:(id)arg4 encodedLocation:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)state;
- (id)street;
- (void)writeTo:(id)arg1;

@end
