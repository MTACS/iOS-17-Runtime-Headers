
@protocol RERemoteVideoPlayer <NSObject>

@required

- (id)addEndpoint:(NSObject<OS_xpc_object> *)arg1;
- (void)removeEndpoint:(id)arg1;
- (void)setSTSLabel:(NSString *)arg1;

@optional

- (bool)hasMediaCharacteristicAudible;
- (struct CGSize { double x1; double x2; })videoTrackNaturalSize;

@end
