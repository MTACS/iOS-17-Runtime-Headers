
@interface UICellAccessoryLabel : UICellAccessory {
    bool  _adjustsFontForContentSizeCategory;
    UIFont * _font;
    NSString * _text;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly, copy) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_canDirectlyUpdateExistingAccessoryViewFrom:(id)arg1;
- (id)_identifier;
- (long long)_systemType;
- (long long)_systemTypePlacementForHeader:(bool)arg1;
- (bool)adjustsFontForContentSizeCategory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)font;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setFont:(id)arg1;
- (id)text;

@end
