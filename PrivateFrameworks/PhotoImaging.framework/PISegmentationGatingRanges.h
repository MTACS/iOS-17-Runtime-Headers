
@interface PISegmentationGatingRanges : NSObject {
    NSDictionary * _ranges;
    NSArray * _scoreKeys;
}

@property (nonatomic, retain) NSArray *scoreKeys;

+ (id)loadFromURL:(id)arg1;

- (void).cxx_destruct;
- (id)initWithRanges:(id)arg1;
- (id)rangeForKey:(id)arg1;
- (id)scoreKeys;
- (void)setScoreKeys:(id)arg1;

@end
