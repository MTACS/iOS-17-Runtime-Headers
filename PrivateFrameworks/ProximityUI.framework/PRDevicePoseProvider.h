
@interface PRDevicePoseProvider : NSObject {
    <PRDevicePoseProviderDelegate> * _delegate;
}

@property <PRDevicePoseProviderDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)reset;
- (void)setDelegate:(id)arg1;

@end
