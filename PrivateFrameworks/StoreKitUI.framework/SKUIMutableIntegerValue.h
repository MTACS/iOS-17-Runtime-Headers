
@interface SKUIMutableIntegerValue : NSObject <NSCopying> {
    long long  _integerValue;
}

@property (nonatomic) long long integerValue;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (void)setIntegerValue:(long long)arg1;

@end
