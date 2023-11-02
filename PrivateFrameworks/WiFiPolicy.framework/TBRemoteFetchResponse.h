
@interface TBRemoteFetchResponse : NSObject <TBFetchResponse> {
    NSError * _error;
    NSArray * _results;
    NSSet * _tiles;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *results;
@property (nonatomic, readonly) NSDictionary *resultsByBSSID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *tiles;

+ (id)responseWithResults:(id)arg1 tiles:(id)arg2 error:(id)arg3;

- (void).cxx_destruct;
- (id)error;
- (id)initWithResults:(id)arg1 tiles:(id)arg2 error:(id)arg3;
- (id)results;
- (void)setError:(id)arg1;
- (void)setResults:(id)arg1;
- (id)tiles;

@end
