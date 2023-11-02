
@interface BMAppRelevantShortcuts : BMEventBase <BMStoreData> {
    NSString * _bundleID;
    NSString * _keyImageProxyIdentifier;
    NSData * _serializedRelevantShortcut;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *keyImageProxyIdentifier;
@property (nonatomic, readonly) NSData *serializedRelevantShortcut;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)bundleID;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithBundleID:(id)arg1 keyImageProxyIdentifier:(id)arg2 serializedRelevantShortcut:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)keyImageProxyIdentifier;
- (id)serialize;
- (id)serializedRelevantShortcut;
- (void)writeTo:(id)arg1;

@end
