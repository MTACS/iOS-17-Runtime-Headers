
@interface MKDELETESIMRouter : NSObject <MKHTTPRouter> {
    <MKDELETESIMRouterDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKDELETESIMRouterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)delegate;
- (void)server:(id)arg1 didReceiveRequest:(id)arg2 response:(id)arg3;
- (void)setDelegate:(id)arg1;

@end
