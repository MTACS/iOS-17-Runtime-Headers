
@interface HUPocketButtonViewController : UIViewController {
    NSArray * _descriptors;
}

@property (nonatomic, readonly, copy) NSArray *descriptors;

+ (struct CGSize { double x1; double x2; })calculatePreferredContentSizeForDescriptors:(id)arg1;

- (void).cxx_destruct;
- (void)_buttonHit:(id)arg1;
- (id)descriptors;
- (id)initWithButtonDescriptors:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;

@end
