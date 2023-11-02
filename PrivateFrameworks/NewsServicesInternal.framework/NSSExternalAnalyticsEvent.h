
@interface NSSExternalAnalyticsEvent : NSObject <NSSExternalAnalyticsEvent> {
    NSDictionary * _requestQueryParameters;
    NTPBSession * _session;
}

@property (nonatomic, readonly, copy) NSDictionary *requestQueryParameters;
@property (nonatomic, readonly, copy) NTPBSession *session;

- (void).cxx_destruct;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithSession:(id)arg1 requestQueryParameters:(id)arg2;
- (id)requestMetadataWithExternalAnalyticsIdentifier:(id)arg1;
- (id)requestQueryParameters;
- (id)session;

@end
