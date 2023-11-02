
@interface HFAnalyticsGeneralButtonTapEvent : HFAnalyticsEvent {
    NSString * _buttonTitle;
    NSString * _processName;
    NSString * _sourceViewControllerClassName;
}

@property (nonatomic, retain) NSString *buttonTitle;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic, retain) NSString *sourceViewControllerClassName;

- (void).cxx_destruct;
- (id)buttonTitle;
- (id)initWithData:(id)arg1;
- (id)payload;
- (id)processName;
- (void)setButtonTitle:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setSourceViewControllerClassName:(id)arg1;
- (id)sourceViewControllerClassName;

@end
