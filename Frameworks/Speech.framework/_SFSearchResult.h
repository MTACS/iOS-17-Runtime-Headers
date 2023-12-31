
@interface _SFSearchResult : NSObject {
    NSData * _data;
    NSHTTPURLResponse * _response;
    long long  _searchType;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSHTTPURLResponse *response;
@property (nonatomic, readonly) long long searchType;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (id)initWithVoiceSearchResult:(id)arg1;
- (id)response;
- (long long)searchType;

@end
