
@interface LAPersistedRight : LARight {
    NSArray * _privateKeys;
    NSArray * _secrets;
}

@property (nonatomic, readonly) LAPrivateKey *key;
@property (nonatomic, readonly) LASecret *secret;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 accessKey:(id)arg2 privateKeys:(id)arg3 secrets:(id)arg4;
- (id)key;
- (id)secret;

@end
