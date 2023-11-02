
@interface PPHighlightedEventQuery : PPEventQuery {
    int  _highlightsOptions;
}

@property (nonatomic) int highlightsOptions;

- (id)description;
- (int)highlightsOptions;
- (void)setHighlightsOptions:(int)arg1;

@end
