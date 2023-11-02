
@interface ICViewOnlyPopoverViewController : UIViewController <UIPopoverPresentationControllerDelegate> {
    UILabel * _label;
    <ICViewOnlyPopoverDelegate> * _popoverDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic) <ICViewOnlyPopoverDelegate> *popoverDelegate;
@property (readonly) Class superclass;

+ (id)viewOnlyPopoverViewController:(id)arg1 sourceView:(id)arg2;

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)label;
- (id)popoverDelegate;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPopoverDelegate:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
