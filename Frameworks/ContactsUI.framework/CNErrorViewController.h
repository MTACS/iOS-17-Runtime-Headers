
@interface CNErrorViewController : UIViewController <UIAdaptivePresentationControllerDelegate> {
    NSString * _errorMessage;
    UILabel * _label;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *errorMessage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UILabel *label;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)errorMessage;
- (id)initWithMessage:(id)arg1;
- (id)label;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)viewDidLoad;

@end
