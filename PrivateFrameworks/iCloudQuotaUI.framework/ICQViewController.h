
@interface ICQViewController : UIViewController <ICQPageDelegate> {
    UIColor * _buttonTintColor;
    <ICQPageDelegate> * _pageDelegate;
    _ICQPageSpecification * _pageSpecification;
}

@property (nonatomic, copy) UIColor *buttonTintColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <ICQPageDelegate> *pageDelegate;
@property (nonatomic, readonly) _ICQPageSpecification *pageSpecification;
@property (readonly) Class superclass;

+ (bool)supportsPageClassIdentifier:(id)arg1;
+ (Class)viewControllerClassForPageClassIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)buttonTintColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPageSpecification:(id)arg1;
- (id)pageDelegate;
- (id)pageSpecification;
- (void)sender:(id)arg1 action:(long long)arg2 parameters:(id)arg3;
- (void)setButtonTintColor:(id)arg1;
- (void)setPageDelegate:(id)arg1;

@end
