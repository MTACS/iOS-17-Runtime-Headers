
@protocol IKJSDataSourceLoadIndexesRequest <IKJSEventListenerObject, JSExport>

@required

- (void)close:(bool)arg1;
- (JSValue *)dataSource;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;

@end
