
@interface PGTripLocationScore : NSObject {
    void _score;
    void locationNode;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) PGGraphNamedLocationNode *locationNode;
@property (nonatomic, readonly) double score;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithLocationNode:(id)arg1 score:(double)arg2;
- (id)locationNode;
- (double)score;

@end
