
@interface TPSAnalyticsEventContentShared : TPSAnalyticsEvent {
    NSString * _collectionID;
    NSString * _contentID;
    NSString * _shareMethod;
}

@property (nonatomic, retain) NSString *collectionID;
@property (nonatomic, retain) NSString *contentID;
@property (nonatomic, retain) NSString *shareMethod;

+ (id)eventWithContentID:(id)arg1 collectionID:(id)arg2 shareMethod:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithContentID:(id)arg1 collectionID:(id)arg2 shareMethod:(id)arg3;
- (id)collectionID;
- (id)contentID;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;
- (void)setCollectionID:(id)arg1;
- (void)setContentID:(id)arg1;
- (void)setShareMethod:(id)arg1;
- (id)shareMethod;

@end
