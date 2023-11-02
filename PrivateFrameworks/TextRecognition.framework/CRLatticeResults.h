
@interface CRLatticeResults : NSObject {
    NSMutableArray * _mutableResults;
}

@property (nonatomic, retain) NSMutableArray *mutableResults;
@property (nonatomic, readonly) NSArray *results;

- (void).cxx_destruct;
- (void)addResult:(id)arg1;
- (id)init;
- (id)mutableResults;
- (id)results;
- (void)setMutableResults:(id)arg1;

@end
