
@interface AMSMediaTaskTypeConfig : NSObject {
    NSString * _hostBagKey;
    bool  _includePlatform;
    NSString * _realm;
    long long  _type;
    NSString * _typeString;
}

@property (nonatomic, readonly) NSString *hostBagKey;
@property (nonatomic, readonly) bool includePlatform;
@property (nonatomic, readonly) NSString *realm;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *typeString;

+ (id)configForType:(long long)arg1;

- (void).cxx_destruct;
- (id)hostBagKey;
- (bool)includePlatform;
- (id)initWithType:(long long)arg1 typeString:(id)arg2 hostBagKey:(id)arg3 realm:(id)arg4 includePlatform:(bool)arg5;
- (id)realm;
- (long long)type;
- (id)typeString;

@end
