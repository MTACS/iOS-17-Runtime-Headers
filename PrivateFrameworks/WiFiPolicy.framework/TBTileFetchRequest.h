
@interface TBTileFetchRequest : NSObject <NSCopying, TBFetchRequest> {
    bool  _cacheable;
    TBTileFetchRequestDescriptor * _descriptor;
    unsigned long long  _sourcePolicy;
    id /* block */  preferLocalHandler;
    id /* block */  resultsHandler;
    NSDictionary * userInfo;
}

@property (nonatomic) bool cacheable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TBTileFetchRequestDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ preferLocalHandler;
@property (nonatomic, copy) id /* block */ resultsHandler;
@property (nonatomic) unsigned long long sourcePolicy;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *userInfo;

+ (id)fetchRequestWithDescriptor:(id)arg1 sourcePolicy:(unsigned long long)arg2 cacheable:(bool)arg3;

- (void).cxx_destruct;
- (bool)cacheable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptor;
- (bool)doesLocalResultsSatisfyRequest:(id)arg1;
- (void)handlePreferLocalResponse:(id)arg1;
- (void)handleResponse:(id)arg1;
- (id)initWithDescriptor:(id)arg1 sourcePolicy:(unsigned long long)arg2 cacheable:(bool)arg3;
- (id /* block */)preferLocalHandler;
- (id /* block */)resultsHandler;
- (void)setCacheable:(bool)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setPreferLocalHandler:(id /* block */)arg1;
- (void)setResultsHandler:(id /* block */)arg1;
- (void)setSourcePolicy:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;
- (unsigned long long)sourcePolicy;
- (id)userInfo;

@end
