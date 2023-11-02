
@interface BMLifeEventActivityActivitySource : BMEventBase <BMStoreData> {
    NSString * _model;
    NSString * _version;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *model;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *version;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithModel:(id)arg1 version:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)model;
- (id)serialize;
- (id)version;
- (void)writeTo:(id)arg1;

@end
