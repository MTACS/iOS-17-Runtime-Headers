
@protocol OKActionResponderNoExport <NSObject>

@required

- (OFUIView *)actionView;
- (bool)canPerformAction:(OKAction *)arg1;
- (bool)interactivityEnabled;
- (bool)performActionScript:(NSString *)arg1 withAction:(OKAction *)arg2;

@end
