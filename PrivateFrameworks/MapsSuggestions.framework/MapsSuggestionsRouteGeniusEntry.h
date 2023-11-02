
@interface MapsSuggestionsRouteGeniusEntry : NSObject <NSSecureCoding> {
    MapsSuggestionsEntry * _entry;
    GEOComposedRoute * _route;
}

@property (nonatomic, retain) MapsSuggestionsEntry *entry;
@property (nonatomic, retain) GEOComposedRoute *route;

+ (id)entryWithData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)entry;
- (double)etaInSeconds;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntry:(id)arg1 route:(id)arg2;
- (id)route;
- (void)setEntry:(id)arg1;
- (void)setRoute:(id)arg1;

@end
