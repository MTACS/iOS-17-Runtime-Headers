
@interface VUIAlertAction : NSObject {
    bool  _enabled;
    id /* block */  _handler;
    NSDictionary * _metrics;
    long long  _style;
    NSString * _title;
    UIImage * _titleImage;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, retain) NSDictionary *metrics;
@property (nonatomic) long long style;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) UIImage *titleImage;

+ (id)vui_actionWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;
+ (id)vui_actionWithTitle:(id)arg1 titleImage:(id)arg2 style:(long long)arg3 handler:(id /* block */)arg4;
+ (id)vui_actionWithTitle:(id)arg1 titleImage:(id)arg2 style:(long long)arg3 metrics:(id)arg4 handler:(id /* block */)arg5;

- (void).cxx_destruct;
- (id /* block */)handler;
- (bool)isEnabled;
- (id)metrics;
- (void)setEnabled:(bool)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setMetrics:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleImage:(id)arg1;
- (long long)style;
- (id)title;
- (id)titleImage;

@end
