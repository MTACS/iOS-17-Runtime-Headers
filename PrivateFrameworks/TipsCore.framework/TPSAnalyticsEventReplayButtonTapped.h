
@interface TPSAnalyticsEventReplayButtonTapped : TPSAnalyticsEvent {
    NSString * _collectionID;
    NSString * _correlationID;
    NSString * _tipID;
}

@property (nonatomic, retain) NSString *collectionID;
@property (nonatomic, retain) NSString *correlationID;
@property (nonatomic, retain) NSString *tipID;

+ (id)eventWithTipID:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithTipID:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3;
- (id)collectionID;
- (id)correlationID;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;
- (void)setCollectionID:(id)arg1;
- (void)setCorrelationID:(id)arg1;
- (void)setTipID:(id)arg1;
- (id)tipID;

@end
