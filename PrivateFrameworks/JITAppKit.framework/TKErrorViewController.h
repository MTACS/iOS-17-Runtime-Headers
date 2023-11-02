
@interface TKErrorViewController : UIViewController {
    UILabel * _label;
    NSString * _message;
}

@property (nonatomic, copy) NSString *message;

+ (id)viewControllerForMessage:(id)arg1;

- (void).cxx_destruct;
- (void)loadView;
- (id)message;
- (void)setMessage:(id)arg1;
- (void)viewDidLoad;

@end