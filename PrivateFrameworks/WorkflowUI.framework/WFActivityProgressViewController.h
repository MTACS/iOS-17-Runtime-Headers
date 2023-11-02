
@interface WFActivityProgressViewController : UIViewController {
    void _contentView;
    void _state;
    void activityView;
    void successView;
}

@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)viewDidLoad;

@end
