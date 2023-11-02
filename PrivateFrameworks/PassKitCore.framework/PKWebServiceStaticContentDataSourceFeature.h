
@interface PKWebServiceStaticContentDataSourceFeature : PKWebServiceRegionFeature {
    bool  _blockStaticContentFetching;
    NSURL * _contentURL;
    bool  _enabled;
}

@property (nonatomic, readonly) bool blockStaticContentFetching;
@property (nonatomic, readonly) NSURL *contentURL;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;

- (void).cxx_destruct;
- (bool)blockStaticContentFetching;
- (id)contentURL;
- (id)createProductsRequestWithIsFetchBlocked:(bool*)arg1;
- (id)initWithDictionary:(id)arg1 region:(id)arg2;
- (bool)isEnabled;

@end
