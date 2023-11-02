
@interface TPSChecklistContent : TPSContent {
    NSString * _subtitle;
}

@property (nonatomic, copy) NSString *subtitle;

+ (id)na_identity;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 metadata:(id)arg2;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;

@end
