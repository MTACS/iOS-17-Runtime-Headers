
@interface SXLinkTapEvent : SXAnalyticsEvent {
    SXJSONDictionary * _analytics;
    NSURL * _destinationURL;
}

@property (nonatomic, readonly) SXJSONDictionary *analytics;
@property (nonatomic, readonly) NSURL *destinationURL;

- (void).cxx_destruct;
- (id)analytics;
- (id)destinationURL;
- (id)initWithDestinationURL:(id)arg1 analytics:(id)arg2;

@end
