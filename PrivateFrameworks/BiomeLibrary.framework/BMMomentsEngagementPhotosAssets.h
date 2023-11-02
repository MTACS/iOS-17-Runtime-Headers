
@interface BMMomentsEngagementPhotosAssets : BMEventBase <BMStoreData> {
    NSArray * _assetUUIDs;
    NSString * _sourceIdentifier;
    NSString * _sourceName;
}

@property (nonatomic, readonly) NSArray *assetUUIDs;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (nonatomic, readonly) NSString *sourceName;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_assetUUIDsJSONArray;
- (id)assetUUIDs;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithSourceName:(id)arg1 sourceIdentifier:(id)arg2 assetUUIDs:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)sourceIdentifier;
- (id)sourceName;
- (void)writeTo:(id)arg1;

@end
