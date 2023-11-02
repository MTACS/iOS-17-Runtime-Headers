
@protocol VSJSAlert <JSExport>

@required

- (NSArray *)actions;
- (id)init;
- (NSString *)message;
- (void)setActions:(NSArray *)arg1;
- (void)setMessage:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end
