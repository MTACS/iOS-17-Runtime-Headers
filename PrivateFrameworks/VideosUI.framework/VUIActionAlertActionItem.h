
@interface VUIActionAlertActionItem : NSObject {
    VUIAction * _action;
    NSDictionary * _metrics;
    NSString * _title;
    UIImage * _titleImage;
}

@property (nonatomic, retain) VUIAction *action;
@property (nonatomic, retain) NSDictionary *metrics;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) UIImage *titleImage;

- (void).cxx_destruct;
- (id)action;
- (id)initWithTitle:(id)arg1 titleImage:(id)arg2 action:(id)arg3 metrics:(id)arg4;
- (id)metrics;
- (void)setAction:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleImage:(id)arg1;
- (id)title;
- (id)titleImage;

@end
