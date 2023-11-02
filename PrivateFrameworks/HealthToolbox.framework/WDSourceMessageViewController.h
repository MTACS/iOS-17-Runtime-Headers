
@interface WDSourceMessageViewController : HKViewController {
    UILabel * _messageLabel;
    HKSource * _source;
    long long  _style;
}

@property (nonatomic, readonly) long long style;

- (void).cxx_destruct;
- (void)_updateFont;
- (id)initWithStyle:(long long)arg1 source:(id)arg2;
- (long long)style;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
