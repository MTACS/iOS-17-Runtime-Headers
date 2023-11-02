
@interface SPBeaconPayloadCacheSearchResult : NSObject <NSSecureCoding> {
    NSError * _error;
    NSArray * _fileURLs;
    SPSearchResultMarker * _searchResultMarker;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSArray *fileURLs;
@property (nonatomic, retain) SPSearchResultMarker *searchResultMarker;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)fileURLs;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURLs:(id)arg1 searchResultMarker:(id)arg2 error:(id)arg3;
- (id)searchResultMarker;
- (void)setError:(id)arg1;
- (void)setFileURLs:(id)arg1;
- (void)setSearchResultMarker:(id)arg1;

@end
