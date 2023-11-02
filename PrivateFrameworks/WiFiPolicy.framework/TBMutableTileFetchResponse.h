
@interface TBMutableTileFetchResponse : NSObject <TBFetchResponse> {
    NSMutableSet * _mutableTiles;
    NSError * error;
    NSArray * results;
    NSDictionary * resultsByBSSID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *mutableTiles;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly) NSDictionary *resultsByBSSID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *tiles;

- (void).cxx_destruct;
- (void)addResponse:(id)arg1;
- (id)error;
- (id)init;
- (id)mutableTiles;
- (id)results;
- (id)resultsByBSSID;
- (void)setMutableTiles:(id)arg1;
- (id)tiles;

@end
