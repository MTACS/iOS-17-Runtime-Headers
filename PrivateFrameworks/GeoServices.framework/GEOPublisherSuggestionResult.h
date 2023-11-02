
@interface GEOPublisherSuggestionResult : NSObject {
    NSArray * _publishers;
}

@property (nonatomic, readonly) NSArray *publishers;

- (void).cxx_destruct;
- (id)initWithPublisherSuggestionResult:(id)arg1 mapsResults:(id)arg2;
- (id)publishers;

@end
