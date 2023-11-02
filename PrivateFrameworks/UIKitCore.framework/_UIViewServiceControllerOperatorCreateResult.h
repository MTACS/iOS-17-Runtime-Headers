
@interface _UIViewServiceControllerOperatorCreateResult : NSObject <NSSecureCoding> {
    BSMachPortSendRight * _accessibilityServerPort;
    long long  _preferredStatusBarStyle;
    int  _preferredStatusBarVisibility;
    _UIHostedWindowHostingHandle * _serviceWindowHostingHandle;
    NSArray * _supportedInterfaceOrientations;
}

@property (nonatomic, retain) BSMachPortSendRight *accessibilityServerPort;
@property (nonatomic) long long preferredStatusBarStyle;
@property (nonatomic) int preferredStatusBarVisibility;
@property (nonatomic, retain) _UIHostedWindowHostingHandle *serviceWindowHostingHandle;
@property (nonatomic, copy) NSArray *supportedInterfaceOrientations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessibilityServerPort;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)preferredStatusBarStyle;
- (int)preferredStatusBarVisibility;
- (id)serviceWindowHostingHandle;
- (void)setAccessibilityServerPort:(id)arg1;
- (void)setPreferredStatusBarStyle:(long long)arg1;
- (void)setPreferredStatusBarVisibility:(int)arg1;
- (void)setServiceWindowHostingHandle:(id)arg1;
- (void)setSupportedInterfaceOrientations:(id)arg1;
- (id)supportedInterfaceOrientations;

@end
