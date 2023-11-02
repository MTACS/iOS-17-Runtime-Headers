
@interface NSSExternalAnalyticsRequestMetadata : NSObject <NSSecureCoding> {
    NSString * _contentViewedIdentifier;
    NSString * _eventIdentifier;
    int  _eventType;
    NSString * _externalAnalyticsIdentifier;
    NSString * _publisherIdentifier;
    NTPBSession * _session;
}

@property (nonatomic, readonly, copy) NSString *contentViewedIdentifier;
@property (nonatomic, readonly, copy) NSString *eventIdentifier;
@property (nonatomic, readonly) int eventType;
@property (nonatomic, readonly, copy) NSString *externalAnalyticsIdentifier;
@property (nonatomic, readonly, copy) NSString *publisherIdentifier;
@property (nonatomic, readonly, copy) NTPBSession *session;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentViewedIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)eventIdentifier;
- (int)eventType;
- (id)externalAnalyticsIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithSession:(id)arg1 eventIdentifier:(id)arg2 externalAnalyticsIdentifier:(id)arg3 contentViewedIdentifier:(id)arg4 publisherIdentifier:(id)arg5 eventType:(int)arg6;
- (id)publisherIdentifier;
- (id)session;

@end
