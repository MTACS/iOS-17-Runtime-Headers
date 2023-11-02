
@interface TPSSizes : TPSSerializableObject <NSCopying, NSSecureCoding> {
    TPSSize * _compact;
    TPSSize * _regular;
}

@property (nonatomic, copy) TPSSize *compact;
@property (nonatomic, copy) TPSSize *regular;

+ (id)na_identity;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)compact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (double)heightToWidthRatioForViewMode:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)regular;
- (void)setCompact:(id)arg1;
- (void)setRegular:(id)arg1;

@end
