
@interface SFSSymbolAssetInfo : NSObject {
    NSBundle * bundle;
    long long  bundleType;
    NSString * name;
}

@property (readonly) NSBundle *bundle;
@property (readonly) long long bundleType;
@property (readonly) NSString *name;

+ (id)infoForName:(id)arg1 allowsPrivate:(bool)arg2 locale:(id)arg3;
+ (id)localeAgnosticInfo:(id)arg1 allowsPrivate:(bool)arg2;
+ (id)localeSpecificInfo:(id)arg1 locale:(id)arg2;

- (void).cxx_destruct;
- (id)bundle;
- (long long)bundleType;
- (id)initWithName:(id)arg1 bundle:(id)arg2 andType:(long long)arg3;
- (id)name;

@end
