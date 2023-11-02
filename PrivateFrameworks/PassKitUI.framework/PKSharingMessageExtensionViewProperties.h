
@interface PKSharingMessageExtensionViewProperties : NSObject {
    NSString * _buttonText;
    UIImage * _cardImage;
    NSString * _fallbackCardImageName;
    NSString * _leftTitleText;
    NSString * _rightTitleText;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) NSString *buttonText;
@property (nonatomic, retain) UIImage *cardImage;
@property (nonatomic, retain) NSString *fallbackCardImageName;
@property (nonatomic, retain) NSString *leftTitleText;
@property (nonatomic, retain) NSString *rightTitleText;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buttonText;
- (id)cardImage;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackCardImageName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSharingMessageExtensionViewProperties:(id)arg1;
- (id)leftTitleText;
- (id)rightTitleText;
- (void)setButtonText:(id)arg1;
- (void)setCardImage:(id)arg1;
- (void)setFallbackCardImageName:(id)arg1;
- (void)setLeftTitleText:(id)arg1;
- (void)setRightTitleText:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
