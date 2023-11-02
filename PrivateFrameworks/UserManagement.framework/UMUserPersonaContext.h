
@interface UMUserPersonaContext : NSObject <NSCopying> {
    NSObject<OS_voucher> * _voucher;
}

+ (id)currentPersonaContext;

- (void).cxx_destruct;
- (void)contextAdopt;
- (id)copyPersonaContext:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;

@end
