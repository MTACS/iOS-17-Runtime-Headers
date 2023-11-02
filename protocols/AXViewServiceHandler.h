
@protocol AXViewServiceHandler <NSObject>

@required

- (void)hideAXUIViewService:(AXVSBaseService *)arg1;
- (bool)isShowingAXUIViewService:(AXVSBaseService *)arg1;
- (void)showAXUIViewService:(AXVSBaseService *)arg1 withData:(NSDictionary *)arg2;

@end
