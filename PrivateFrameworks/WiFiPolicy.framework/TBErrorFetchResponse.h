
@interface TBErrorFetchResponse : NSObject <TBFetchResponse> {
    NSError * _error;
    NSArray * results;
    NSSet * tiles;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly) NSDictionary *resultsByBSSID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *tiles;

+ (id)remoteResponseWithError:(id)arg1;
+ (id)responseWithError:(id)arg1;

- (void).cxx_destruct;
- (id)error;
- (id)initWithError:(id)arg1;
- (id)results;
- (void)setError:(id)arg1;
- (id)tiles;

@end
