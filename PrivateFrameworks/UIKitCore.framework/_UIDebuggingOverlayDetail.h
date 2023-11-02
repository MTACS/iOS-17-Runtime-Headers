
@interface _UIDebuggingOverlayDetail : NSObject {
    long long  _accessoryType;
    NSString * _detail;
    NSString * _title;
}

@property (nonatomic) long long accessoryType;
@property (nonatomic, retain) NSString *detail;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) UIViewController *viewController;

+ (id)detailWithTitle:(id)arg1 detail:(id)arg2;

- (void).cxx_destruct;
- (void)_updateForInspectedView:(id)arg1;
- (long long)accessoryType;
- (id)detail;
- (void)setAccessoryType:(long long)arg1;
- (void)setDetail:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)view;
- (id)viewController;

@end
