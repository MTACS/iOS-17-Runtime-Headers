
@protocol BWStillImageProcessingStatusDelegate <NSObject>

@required

- (void)node:(BWNode *)arg1 didSelectNewReferenceFrameWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 transform:(NSArray *)arg3;

@end
