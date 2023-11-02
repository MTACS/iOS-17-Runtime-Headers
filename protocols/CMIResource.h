
@protocol CMIResource <NSObject>

@required

- (NSDictionary *)attachments;
- (NSDictionary *)metadata;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })presentationTimeStamp;
- (void)releaseAll;
- (int)waitForCompletion;

@end
