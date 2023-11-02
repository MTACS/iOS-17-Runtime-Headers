
@interface TPSAnalyticsEventSession : TPSAnalyticsEvent {
    long long  _collectionsViewed;
    long long  _tipsViewed;
}

@property (nonatomic, readonly) long long collectionsViewed;
@property (nonatomic, readonly) long long tipsViewed;

+ (id)eventWithCollectionsViewed:(long long)arg1 tipsViewed:(long long)arg2;
+ (bool)supportsSecureCoding;

- (id)_initWithCollectionsViewed:(long long)arg1 tipsViewed:(long long)arg2;
- (long long)collectionsViewed;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;
- (long long)tipsViewed;

@end
