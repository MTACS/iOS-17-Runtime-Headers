
@interface DACLifecycleChangelist : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _infos;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithLifecycleInfoArray:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerate:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lifecycleInfoForActivity:(id)arg1;

@end
