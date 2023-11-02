
@interface TPSAnalyticsEventAnimationFinished : TPSAnalyticsEvent {
    bool  _animationFinished;
    NSString * _animationSource;
    NSString * _collectionID;
    NSString * _correlationID;
    NSString * _tipID;
}

@property (nonatomic) bool animationFinished;
@property (nonatomic, readonly) NSString *animationSource;
@property (nonatomic, retain) NSString *collectionID;
@property (nonatomic, retain) NSString *correlationID;
@property (nonatomic, retain) NSString *tipID;

+ (id)eventWithTipID:(id)arg1 animationFinished:(bool)arg2 animationSource:(id)arg3 collectionID:(id)arg4 correlationID:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithTipID:(id)arg1 animationFinished:(bool)arg2 animationSource:(id)arg3 collectionID:(id)arg4 correlationID:(id)arg5;
- (bool)animationFinished;
- (id)animationSource;
- (id)collectionID;
- (id)correlationID;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;
- (void)setAnimationFinished:(bool)arg1;
- (void)setCollectionID:(id)arg1;
- (void)setCorrelationID:(id)arg1;
- (void)setTipID:(id)arg1;
- (id)tipID;

@end
