
@interface TPSAnalyticsEventTipSaved : TPSAnalyticsEvent {
    NSString * _collectionID;
    NSString * _correlationID;
    bool  _saved;
    NSString * _tipID;
}

@property (nonatomic, copy) NSString *collectionID;
@property (nonatomic, copy) NSString *correlationID;
@property (nonatomic) bool saved;
@property (nonatomic, retain) NSString *tipID;

+ (id)eventWithTipID:(id)arg1 saved:(bool)arg2 correlationID:(id)arg3 collectionID:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithTipID:(id)arg1 saved:(bool)arg2 correlationID:(id)arg3 collectionID:(id)arg4;
- (id)collectionID;
- (id)correlationID;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;
- (bool)saved;
- (void)setCollectionID:(id)arg1;
- (void)setCorrelationID:(id)arg1;
- (void)setSaved:(bool)arg1;
- (void)setTipID:(id)arg1;
- (id)tipID;

@end
