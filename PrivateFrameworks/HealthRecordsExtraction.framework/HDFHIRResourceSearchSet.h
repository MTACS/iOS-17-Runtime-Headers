
@interface HDFHIRResourceSearchSet : NSObject {
    NSArray * _entries;
    NSURL * _nextPageURL;
    NSURL * _pageURL;
    NSURL * _serverBaseURL;
}

@property (nonatomic, readonly, copy) NSArray *entries;
@property (nonatomic, readonly, copy) NSURL *nextPageURL;
@property (nonatomic, readonly, copy) NSURL *pageURL;
@property (nonatomic, readonly, copy) NSURL *serverBaseURL;

+ (id)searchSetWithFHIRJSONObject:(id)arg1 serverBaseURL:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_initWithEntries:(id)arg1 serverBaseURL:(id)arg2 pageURL:(id)arg3 nextPageURL:(id)arg4;
- (id)entries;
- (id)nextPageURL;
- (id)pageURL;
- (id)serverBaseURL;

@end
