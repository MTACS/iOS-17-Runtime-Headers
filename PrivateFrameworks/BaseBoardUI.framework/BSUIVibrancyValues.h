
@interface BSUIVibrancyValues : NSObject <NSCopying> {
    long long  _resolvedEffectType;
    NSString * _resolvedGroupName;
}

@property (nonatomic, readonly) long long resolvedEffectType;
@property (nonatomic, readonly) NSString *resolvedGroupName;

- (void).cxx_destruct;
- (void)calculateValuesForConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (long long)resolvedEffectType;
- (id)resolvedGroupName;

@end
