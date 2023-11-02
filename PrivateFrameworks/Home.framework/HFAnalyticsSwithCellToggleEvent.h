
@interface HFAnalyticsSwithCellToggleEvent : HFAnalyticsEvent {
    NSNumber * _isOn;
    NSString * _itemClassName;
    NSString * _processName;
    NSString * _sourceViewControllerClassName;
    NSString * _toggleTitle;
}

@property (nonatomic, retain) NSNumber *isOn;
@property (nonatomic, retain) NSString *itemClassName;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic, retain) NSString *sourceViewControllerClassName;
@property (nonatomic, retain) NSString *toggleTitle;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)isOn;
- (id)itemClassName;
- (id)payload;
- (id)processName;
- (void)setIsOn:(id)arg1;
- (void)setItemClassName:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setSourceViewControllerClassName:(id)arg1;
- (void)setToggleTitle:(id)arg1;
- (id)sourceViewControllerClassName;
- (id)toggleTitle;

@end
