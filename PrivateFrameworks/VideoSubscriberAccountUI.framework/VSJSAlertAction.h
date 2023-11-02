
@interface VSJSAlertAction : IKJSObject <VSJSAlertAction> {
    JSValue * _callback;
    NSString * _style;
    NSString * _title;
}

@property (nonatomic, retain) JSValue *callback;
@property (nonatomic, copy) NSString *style;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)callback;
- (id)init;
- (void)setCallback:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)style;
- (id)title;

@end
