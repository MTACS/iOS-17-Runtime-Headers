
@protocol RTCMutableYUVPlanarBuffer <RTCYUVPlanarBuffer>

@required

- (char *)mutableDataU;
- (char *)mutableDataV;
- (char *)mutableDataY;

@end
