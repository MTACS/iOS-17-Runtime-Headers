
@protocol NCDigestScheduleManagerObserver <NSObject>

@required

- (void)publishScheduledDigest:(NCDigestInfo *)arg1 upcomingDigest:(NCDigestInfo *)arg2;
- (void)publishUpcomingDigest:(NCDigestInfo *)arg1;
- (void)revokeUpcomingDigest:(NCDigestInfo *)arg1;

@end
