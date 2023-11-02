
@interface BMSiriMemoryReferenceResolution : BMEventBase <BMStoreData> {
    NSArray * _entityMapElements;
    NSString * _version;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *entityMapElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *version;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_entityMapElementsJSONArray;
- (unsigned int)dataVersion;
- (id)description;
- (id)entityMapElements;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithVersion:(id)arg1 entityMapElements:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)version;
- (void)writeTo:(id)arg1;

@end
