
@interface PKPayLaterSwitchRow : NSObject <PKPayLaterCollectionViewRow> {
    id /* block */  _changeHandler;
    bool  _disabled;
    bool  _on;
    bool  _showSpinner;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (getter=isOn, nonatomic) bool on;
@property (nonatomic) bool showSpinner;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_switchValueChanged:(id)arg1;
- (Class)cellClass;
- (void)configureCell:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithTitle:(id)arg1 on:(bool)arg2 changeHandler:(id /* block */)arg3;
- (bool)isDisabled;
- (bool)isEqual:(id)arg1;
- (bool)isOn;
- (void)setDisabled:(bool)arg1;
- (void)setOn:(bool)arg1;
- (void)setShowSpinner:(bool)arg1;
- (bool)showSpinner;

@end
