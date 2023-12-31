
@protocol OKActionResponder <OKActionResponderNoExport, JSExport>

@required

- (bool)sendAction:(OKAction *)arg1 toTarget:(NSString *)arg2;

@optional

- (bool)sendAction:(OKAction *)arg1 toTarget:(NSString *)arg2 __JS_EXPORT_AS__sendAction:(id)arg3;

@end
