
@interface BCSActionPickerItem : NSObject {
    BCSAction * _action;
    id /* block */  _actionHandler;
    <BCSActionPickerItemDelegate> * _actionPickerItemDelegate;
    NSURL * _actionURL;
    bool  _canGroupInSubmenu;
    bool  _copyActionItem;
    UIImage * _icon;
    NSString * _label;
    NSString * _targetApplicationBundleIdentifier;
    bool  _useInlineMenu;
}

@property (nonatomic, readonly) BCSAction *action;
@property (nonatomic) <BCSActionPickerItemDelegate> *actionPickerItemDelegate;
@property (nonatomic, readonly, copy) NSURL *actionURL;
@property (nonatomic, readonly) bool canGroupInSubmenu;
@property (getter=isCopyActionItem, nonatomic, readonly) bool copyActionItem;
@property (nonatomic, readonly) long long dataType;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly, copy) NSString *localizedDefaultActionDescription;
@property (nonatomic, readonly) bool shouldDismissAlertWhenActionIsTaken;
@property (nonatomic, readonly, copy) NSString *targetApplicationBundleIdentifier;
@property (nonatomic, readonly) bool useInlineMenu;

+ (id)actionPickerItemWithLabel:(id)arg1 actionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)action;
- (id)actionPickerItemDelegate;
- (id)actionURL;
- (bool)canGroupInSubmenu;
- (long long)dataType;
- (void)didPerformAction;
- (id)icon;
- (id)initWithAction:(id)arg1;
- (id)initWithLabel:(id)arg1 action:(id)arg2;
- (id)initWithLabel:(id)arg1 actionHandler:(id /* block */)arg2;
- (bool)isCopyActionItem;
- (id)label;
- (id)localizedDefaultActionDescription;
- (void)performAction;
- (void)performActionWithFBOptions:(id)arg1;
- (void)setActionPickerItemDelegate:(id)arg1;
- (void)setIcon:(id)arg1;
- (bool)shouldDismissAlertWhenActionIsTaken;
- (id)targetApplicationBundleIdentifier;
- (bool)useInlineMenu;

@end
