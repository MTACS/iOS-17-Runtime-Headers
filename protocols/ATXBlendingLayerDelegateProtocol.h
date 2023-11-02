
@protocol ATXBlendingLayerDelegateProtocol <NSObject>

@required

- (void)blendingLayerRerankedSuggestions:(NSArray *)arg1 consumerSubType:(unsigned char)arg2;
- (void)blendingLayerUpdatedUICache:(id <ATXUICacheProtocol>)arg1 consumerSubType:(unsigned char)arg2;

@end
