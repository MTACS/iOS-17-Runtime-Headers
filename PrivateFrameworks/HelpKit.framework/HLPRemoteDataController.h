
@interface HLPRemoteDataController : NSObject {
    NSURL * _URL;
    HLPURLSessionItem * _URLSessionItem;
    bool  _hasLoaded;
    NSDictionary * _headerFields;
    bool  _loading;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, retain) HLPURLSessionItem *URLSessionItem;
@property (nonatomic) bool hasLoaded;
@property (nonatomic, retain) NSDictionary *headerFields;
@property (nonatomic) bool loading;

- (void).cxx_destruct;
- (id)URL;
- (id)URLSessionItem;
- (void)cancel;
- (void)clearData;
- (void)dealloc;
- (void)fetchDataWithDataType:(long long)arg1 identifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)hasLoaded;
- (id)headerFields;
- (id)initWithURL:(id)arg1;
- (bool)loading;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (void)processFileURLWithCompletionHandler:(id /* block */)arg1;
- (void)setHasLoaded:(bool)arg1;
- (void)setHeaderFields:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)setURL:(id)arg1;
- (void)setURLSessionItem:(id)arg1;

@end
