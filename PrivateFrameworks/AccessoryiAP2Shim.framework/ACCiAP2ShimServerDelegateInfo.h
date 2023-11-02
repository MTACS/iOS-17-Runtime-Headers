
@interface ACCiAP2ShimServerDelegateInfo : NSObject {
    <ACCiAP2ShimServerDelegate> * _delegate;
}

@property (readonly) <ACCiAP2ShimServerDelegate> *delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;

@end
