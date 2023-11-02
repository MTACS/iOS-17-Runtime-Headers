
@interface SRUIFAlternativeInfo : NSObject {
    NSNumber * _combinedRank;
    NSNumber * _combinedScore;
    NSNumber * _isFromDevice;
    NSNumber * _originalRank;
    NSNumber * _originalScore;
}

@property (nonatomic, copy) NSNumber *combinedRank;
@property (nonatomic, copy) NSNumber *combinedScore;
@property (nonatomic, copy) NSNumber *isFromDevice;
@property (nonatomic, copy) NSNumber *originalRank;
@property (nonatomic, copy) NSNumber *originalScore;

- (void).cxx_destruct;
- (id)combinedRank;
- (id)combinedScore;
- (id)isFromDevice;
- (id)originalRank;
- (id)originalScore;
- (void)setCombinedRank:(id)arg1;
- (void)setCombinedScore:(id)arg1;
- (void)setIsFromDevice:(id)arg1;
- (void)setOriginalRank:(id)arg1;
- (void)setOriginalScore:(id)arg1;

@end
