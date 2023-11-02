
@interface SKUIPostReviewOperation : ISOperation {
    NSDictionary * _responseDictionary;
    SKUIReviewMetadata * _review;
}

@property (readonly) NSDictionary *responseDictionary;

- (void).cxx_destruct;
- (id)_httpBody;
- (id)initWithReviewMetadata:(id)arg1;
- (id)responseDictionary;
- (void)run;

@end
