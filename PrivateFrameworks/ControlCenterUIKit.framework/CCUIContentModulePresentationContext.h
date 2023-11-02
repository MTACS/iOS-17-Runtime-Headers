
@interface CCUIContentModulePresentationContext : NSObject <NSCopying> {
    long long  _environment;
}

@property (nonatomic, readonly) long long environment;

+ (id)defaultAlertPresentationContext;
+ (id)defaultControlCenterPresentationContext;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)environment;
- (unsigned long long)hash;
- (id)initWithEnvironment:(long long)arg1;

@end
