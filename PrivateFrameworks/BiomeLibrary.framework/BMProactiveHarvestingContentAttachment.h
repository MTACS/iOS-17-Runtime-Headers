
@interface BMProactiveHarvestingContentAttachment : BMEventBase <BMStoreData> {
    NSString * _filename;
    NSString * _path;
    NSString * _type;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *filename;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *path;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)filename;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithType:(id)arg1 filename:(id)arg2 path:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)path;
- (id)serialize;
- (id)type;
- (void)writeTo:(id)arg1;

@end
