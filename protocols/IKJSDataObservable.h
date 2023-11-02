
@protocol IKJSDataObservable <JSExport>

@required

- (JSValue *)getPropertyPath:(NSString *)arg1;
- (void)setPropertyPath:(NSString *)arg1 :(JSValue *)arg2;
- (void)touchPropertyPath:(NSString *)arg1;

@end
