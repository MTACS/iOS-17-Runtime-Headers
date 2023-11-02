
@interface WPLinkFilteringData : NSObject {
    NSArray * _rules;
}

@property (nonatomic, readonly) NSArray *rules;
@property (nonatomic, readonly) NSDictionary *scopedQueryParameters;

- (void).cxx_destruct;
- (id)description;
- (id)initWithQueryParameters:(id)arg1;
- (id)initWithRules:(id)arg1;
- (id)rules;
- (id)scopedQueryParameters;

@end
