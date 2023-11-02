
@interface PKIdentityHeroViewConfiguration : NSObject {
    PKPaymentHeroImage * _image;
    NSString * _primaryButtonTitle;
    NSString * _secondaryButtonTitle;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) PKPaymentHeroImage *image;
@property (nonatomic, retain) NSString *primaryButtonTitle;
@property (nonatomic, retain) NSString *secondaryButtonTitle;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)image;
- (id)initWithImage:(id)arg1 title:(id)arg2 subtitle:(id)arg3 primaryButtonTitle:(id)arg4 secondaryButtonTitle:(id)arg5;
- (id)primaryButtonTitle;
- (id)secondaryButtonTitle;
- (void)setImage:(id)arg1;
- (void)setPrimaryButtonTitle:(id)arg1;
- (void)setSecondaryButtonTitle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
