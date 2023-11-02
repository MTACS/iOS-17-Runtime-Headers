
@interface _MSRemoteViewController : _UIRemoteViewController <MSViewServiceHostProtocol> {
    <MSViewServiceHostProtocol> * _host;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MSViewServiceHostProtocol> *host;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)host;
- (void)requestDismiss;
- (void)setHost:(id)arg1;

@end
