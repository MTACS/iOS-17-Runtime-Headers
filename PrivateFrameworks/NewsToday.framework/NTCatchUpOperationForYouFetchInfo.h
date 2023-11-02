
@interface NTCatchUpOperationForYouFetchInfo : NSObject <NSCopying> {
    bool  _attemptedCachedOnly;
    NSDictionary * _feedContextByFeedID;
}

@property (nonatomic, readonly) bool attemptedCachedOnly;
@property (nonatomic, readonly, copy) NSDictionary *feedContextByFeedID;

- (void).cxx_destruct;
- (bool)attemptedCachedOnly;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)feedContextByFeedID;
- (id)init;
- (id)initWithAttemptedCachedOnly:(bool)arg1 feedContextByFeedID:(id)arg2;

@end
