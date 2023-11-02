
@protocol VSJSAlertAction <JSExport>

@required

- (JSValue *)callback;
- (id)init;
- (void)setCallback:(JSValue *)arg1;
- (void)setStyle:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)style;
- (NSString *)title;

@end
