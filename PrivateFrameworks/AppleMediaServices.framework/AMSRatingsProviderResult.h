
@interface AMSRatingsProviderResult : NSObject {
    NSArray * _ratingsStoreFronts;
}

@property (nonatomic, readonly) NSArray *ratingsStoreFronts;

- (void).cxx_destruct;
- (id)_mapRatingsDictionaries:(id)arg1 withMediaType:(unsigned long long)arg2 andStoreFront:(id)arg3;
- (unsigned long long)_ratingInfoMediaTypeForTaskMediaType:(unsigned long long)arg1;
- (id)initWithData:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3;
- (id)initWithDictionaries:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3;
- (id)initWithURLResult:(id)arg1 mediaType:(unsigned long long)arg2 andStoreFront:(id)arg3;
- (id)ratingsStoreFronts;

@end
