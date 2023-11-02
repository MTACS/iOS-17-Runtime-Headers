
@interface PXMemoriesFeedLayoutGenerator : PXLayoutGenerator {
    bool  _includeDateHeader;
    bool  _isFirstHeader;
}

@property (nonatomic) bool includeDateHeader;
@property (nonatomic) bool isFirstHeader;
@property (nonatomic, copy) PXMemoriesFeedLayoutMetrics *metrics;

- (bool)includeDateHeader;
- (id)initWithMetrics:(id)arg1;
- (bool)isFirstHeader;
- (void)setIncludeDateHeader:(bool)arg1;
- (void)setIsFirstHeader:(bool)arg1;

@end
