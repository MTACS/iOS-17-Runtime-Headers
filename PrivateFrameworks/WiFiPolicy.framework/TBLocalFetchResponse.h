
@interface TBLocalFetchResponse : NSObject <TBFetchResponse> {
    NSArray * _results;
    NSDictionary * _resultsByBSSID;
    NSSet * _tiles;
    NSError * error;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *results;
@property (nonatomic, retain) NSDictionary *resultsByBSSID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *tiles;

+ (id)responseWithResults:(id)arg1 entityDescription:(id)arg2;
+ (id)responseWithResultsByBSSID:(id)arg1;

- (void).cxx_destruct;
- (id)error;
- (id)initWithResults:(id)arg1 entityDescription:(id)arg2;
- (id)initWithResultsByBSSID:(id)arg1;
- (id)results;
- (id)resultsByBSSID;
- (void)setResults:(id)arg1;
- (void)setResultsByBSSID:(id)arg1;
- (id)tiles;

@end
