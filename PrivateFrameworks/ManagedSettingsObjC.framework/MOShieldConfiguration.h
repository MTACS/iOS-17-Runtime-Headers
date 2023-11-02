
@interface MOShieldConfiguration : NSObject <NSSecureCoding> {
    NSData * _backgroundColorData;
    NSData * _backgroundEffectData;
    NSData * _iconData;
    NSData * _primaryButtonColorData;
    MOShieldLabel * _primaryButtonLabel;
    MOShieldLabel * _secondaryButtonLabel;
    MOShieldLabel * _subtitle;
    MOShieldLabel * _title;
}

@property (readonly, copy) NSData *backgroundColorData;
@property (readonly, copy) NSData *backgroundEffectData;
@property (readonly, copy) NSData *iconData;
@property (readonly, copy) NSData *primaryButtonColorData;
@property (readonly) MOShieldLabel *primaryButtonLabel;
@property (readonly) MOShieldLabel *secondaryButtonLabel;
@property (readonly) MOShieldLabel *subtitle;
@property (readonly) MOShieldLabel *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColorData;
- (id)backgroundEffectData;
- (void)encodeWithCoder:(id)arg1;
- (id)iconData;
- (id)initWithBackgroundColorData:(id)arg1 backgroundEffectData:(id)arg2 iconData:(id)arg3 title:(id)arg4 subtitle:(id)arg5 primaryButtonLabel:(id)arg6 primaryButtonColorData:(id)arg7 secondaryButtonLabel:(id)arg8;
- (id)initWithCoder:(id)arg1;
- (id)primaryButtonColorData;
- (id)primaryButtonLabel;
- (id)secondaryButtonLabel;
- (id)subtitle;
- (id)title;

@end
