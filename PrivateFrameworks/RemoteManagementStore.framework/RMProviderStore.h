
@interface RMProviderStore : RMBaseStore <NSSecureCoding, RMMutableStoreProtocol>

@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (nonatomic, readonly) bool dataSeparated;
@property (nonatomic, readonly) bool defaultToInteractive;
@property (nonatomic, readonly, copy) NSURL *enrollmentURL;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *personaIdentifier;
@property (nonatomic, readonly) long long scope;
@property (nonatomic, readonly, copy) NSString *storeDescription;
@property (nonatomic, readonly) long long type;

+ (void)createStoreWithType:(long long)arg1 scope:(long long)arg2 defaultToInteractive:(bool)arg3 dataSeparated:(bool)arg4 options:(id)arg5 completionHandler:(id /* block */)arg6;
+ (void)removeStoreWithIdentifier:(id)arg1 scope:(long long)arg2 completionHandler:(id /* block */)arg3;
+ (void)storeWithIdentifier:(id)arg1 scope:(long long)arg2 completionHandler:(id /* block */)arg3;
+ (void)storesWithScope:(long long)arg1 completionHandler:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void)applyChangesWithCompletionHandler:(id /* block */)arg1;
- (void)deleteDeclarationWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStore:(id)arg1;
- (void)saveDeclaration:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)setMetadataValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;

@end
