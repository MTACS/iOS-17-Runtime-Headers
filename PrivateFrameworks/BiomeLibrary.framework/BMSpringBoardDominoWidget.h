
@interface BMSpringBoardDominoWidget : BMEventBase <BMStoreData> {
    NSString * _containerBundleId;
    NSString * _extensionBundleId;
    NSData * _intent;
    NSString * _kind;
    NSString * _uniqueId;
}

@property (nonatomic, readonly) NSString *containerBundleId;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *extensionBundleId;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *intent;
@property (nonatomic, readonly) NSString *kind;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueId;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)containerBundleId;
- (unsigned int)dataVersion;
- (id)description;
- (id)extensionBundleId;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithUniqueId:(id)arg1 extensionBundleId:(id)arg2 kind:(id)arg3 containerBundleId:(id)arg4 intent:(id)arg5;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)kind;
- (id)serialize;
- (id)uniqueId;
- (void)writeTo:(id)arg1;

@end
