
@interface STWebRemoteViewController : _UIRemoteViewController <STWebServiceDelegate> {
    bool  _URLIsBlocked;
}

@property bool URLIsBlocked;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (void)instantiateWebViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (bool)URLIsBlocked;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setURLIsBlocked:(bool)arg1;
- (void)setURLIsBlocked:(bool)arg1 replyHandler:(id /* block */)arg2;

@end
