
@interface AXMScreenRecognitionVisionProcessingResult : NSObject {
    bool  _sameScreenCapResult;
    NSData * _screenEquivalenceToken;
    NSArray * _sortedFeatures;
}

@property (nonatomic) bool sameScreenCapResult;
@property (nonatomic, retain) NSData *screenEquivalenceToken;
@property (nonatomic, retain) NSArray *sortedFeatures;

- (void).cxx_destruct;
- (bool)sameScreenCapResult;
- (id)screenEquivalenceToken;
- (void)setSameScreenCapResult:(bool)arg1;
- (void)setScreenEquivalenceToken:(id)arg1;
- (void)setSortedFeatures:(id)arg1;
- (id)sortedFeatures;

@end
