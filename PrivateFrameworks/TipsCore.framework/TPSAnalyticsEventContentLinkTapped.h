
@interface TPSAnalyticsEventContentLinkTapped : TPSAnalyticsEvent {
    NSString * _bundleID;
    NSString * _clientConditionID;
    NSString * _collectionID;
    NSString * _contentID;
    NSString * _context;
    NSString * _correlationID;
    NSString * _displayType;
    NSString * _url;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *clientConditionID;
@property (nonatomic, readonly) NSString *collectionID;
@property (nonatomic, readonly) NSString *contentID;
@property (nonatomic, readonly) NSString *context;
@property (nonatomic, readonly) NSString *correlationID;
@property (nonatomic, retain) NSString *displayType;
@property (nonatomic, readonly) NSString *url;

+ (id)eventWithContentID:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3 clientConditionID:(id)arg4 url:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithContentID:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3 clientConditionID:(id)arg4 url:(id)arg5 bundleID:(id)arg6 context:(id)arg7 displayType:(id)arg8;
- (id)bundleID;
- (id)clientConditionID;
- (id)collectionID;
- (id)contentID;
- (id)context;
- (id)correlationID;
- (id)displayType;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;
- (void)setDataProvider:(id)arg1;
- (void)setDisplayType:(id)arg1;
- (id)url;

@end
