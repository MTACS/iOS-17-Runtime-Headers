
@interface LPFetcherJSONResponse : LPFetcherResponse <LPFetcherURLResponse> {
    id  _rootObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) id rootObject;
@property (readonly) Class superclass;

+ (bool)isValidMIMEType:(id)arg1;
+ (id)responseForFetcher:(id)arg1 withData:(id)arg2 MIMEType:(id)arg3;

- (void).cxx_destruct;
- (id)initWithRootObject:(id)arg1 fetcher:(id)arg2;
- (id)rootObject;

@end
