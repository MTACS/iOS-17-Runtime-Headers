
@interface CPActionSheetTemplate : CPTemplate <CPAlertDelegate> {
    NSArray * _actions;
    <CPAlertDelegate> * _alertDelegate;
    NSString * _message;
    NSString * _title;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, retain) <CPAlertDelegate> *alertDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *message;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (id)alertDelegate;
- (void)encodeWithCoder:(id)arg1;
- (void)handleAlertActionForIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 actions:(id)arg3;
- (id)leadingNavigationBarButtons;
- (id)message;
- (void)setAlertDelegate:(id)arg1;
- (void)setLeadingNavigationBarButtons:(id)arg1;
- (void)setTrailingNavigationBarButtons:(id)arg1;
- (id)title;
- (id)trailingNavigationBarButtons;

@end
