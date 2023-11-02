
@interface GEOPublisherResult : NSObject {
    GEOPublisher * _publisher;
    GEOPDComponent * _publisherComponent;
    GEOPDPublisherResult * _publisherResult;
}

@property (nonatomic, readonly) GEOPublisher *publisher;

+ (id)publisherResultsFromResponse:(id)arg1;

- (void).cxx_destruct;
- (id)initWithPublisherResult:(id)arg1;
- (id)publisher;

@end
