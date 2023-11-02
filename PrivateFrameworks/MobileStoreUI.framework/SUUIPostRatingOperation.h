
@interface SUUIPostRatingOperation : ISOperation {
    NSString * _itemID;
    long long  _rating;
    NSDictionary * _responseDictionary;
    SUUIReviewConfiguration * _reviewConfiguration;
}

@property (readonly) NSDictionary *responseDictionary;

- (void).cxx_destruct;
- (id)initWithRating:(long long)arg1 forItemID:(id)arg2 reviewConfiguration:(id)arg3;
- (id)responseDictionary;
- (void)run;

@end
