
@interface SKUIItemOfferButtonAppearance : NSObject {
    UIColor * _buttonColor;
    UIColor * _confirmationColor;
}

@property (nonatomic, readonly) UIColor *buttonColor;
@property (nonatomic, readonly) UIColor *confirmationColor;

- (void).cxx_destruct;
- (id)buttonColor;
- (id)confirmationColor;
- (id)initWithColorScheme:(id)arg1;

@end
