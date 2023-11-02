
@interface INUserContext : NSObject <NSSecureCoding> {
    INUserContextStore * _store;
}

+ (long long)_type;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_becomeCurrentNoHelper;
- (id)_init;
- (void)_setStore:(id)arg1;
- (void)becomeCurrent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
