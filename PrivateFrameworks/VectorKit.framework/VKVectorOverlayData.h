
@interface VKVectorOverlayData : NSObject {
    long long  _blendMode;
    <VKVectorOverlayDelegate> * _delegate;
}

@property (nonatomic) long long blendMode;
@property (getter=_delegate, setter=_setDelegate:, nonatomic) <VKVectorOverlayDelegate> *delegate;

- (void).cxx_destruct;
- (id)_delegate;
- (void)_setDelegate:(id)arg1;
- (long long)blendMode;
- (id)init;
- (void)setBlendMode:(long long)arg1;

@end
