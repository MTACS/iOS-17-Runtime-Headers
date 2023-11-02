
@interface MKGETStatusRouter : NSObject <MKHTTPRouter> {
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void)server:(id)arg1 didReceiveRequest:(id)arg2 response:(id)arg3;
- (void)setState:(long long)arg1;
- (long long)state;

@end
