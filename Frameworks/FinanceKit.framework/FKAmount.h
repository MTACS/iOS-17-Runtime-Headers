
@interface FKAmount : NSObject <NSCopying> {
    NSString * _currency;
    NSDecimalNumber * _decimal;
}

@property (nonatomic, readonly, copy) NSString *currency;
@property (nonatomic, readonly, copy) NSDecimalNumber *decimal;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currency;
- (id)decimal;
- (unsigned long long)hash;
- (id)initWithDecimalNumber:(id)arg1 currency:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
