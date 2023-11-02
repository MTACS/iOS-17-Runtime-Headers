
@interface WPLinkFilteringRule : NSObject {
    NSString * _domain;
    NSString * _queryParameter;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *queryParameter;

- (void).cxx_destruct;
- (id)description;
- (id)domain;
- (id)initWithQueryParameter:(id)arg1 domain:(id)arg2;
- (id)queryParameter;

@end
