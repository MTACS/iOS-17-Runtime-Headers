
@protocol _SSURLCompletionMatch <NSObject>

@required

- (bool)isSynthesizedTopHit;
- (bool)isTopHit;
- (bool)isTopHitDueToTriggerMatch;
- (NSDate *)lastVisitTime;
- (long long)matchLocation;
- (NSString *)title;
- (NSURL *)url;
- (NSString *)userVisibleURLString;
- (long long)visitCount;

@end
