
@interface HRElectrocardiogramResultViewItem : NSObject {
    NSString * _badge;
    NSArray * _expandedContentItems;
    NSString * _numberedTitle;
    NSString * _title;
    NSString * _videoPath;
    NSString * _visibleBodyText;
}

@property (nonatomic, readonly, copy) NSString *badge;
@property (nonatomic, readonly) NSArray *expandedContentItems;
@property (nonatomic, readonly, copy) NSString *numberedTitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *videoPath;
@property (nonatomic, readonly, copy) NSString *visibleBodyText;

+ (id)_makeItemForAtrialFibrillationAlgorithmVersionOne;
+ (id)_makeItemForAtrialFibrillationAlgorithmVersionTwoUpgradingFromAlgorithmVersion:(long long)arg1;
+ (id)_makeItemForHighOrLowAbove120Below50AlgorithmVersionOne;
+ (id)_makeItemForHighOrLowAbove150Below50AlgorithmVersionTwoUpgradingFromAlgorithmVersion:(long long)arg1;
+ (id)_makeItemForInconclusiveAlgorithmVersionOneWithLearnMoreDelegate:(id)arg1;
+ (id)_makeItemForInconclusiveAlgorithmVersionTwoUpgradingFromAlgorithmVersion:(long long)arg1 withLearnMoreDelegate:(id)arg2;
+ (id)_makeItemForPoorRecordingAlgorithmVersionTwoUpgradingFromAlgorithmVersion:(long long)arg1 withLearnMoreDelegate:(id)arg2;
+ (id)_makeItemForSinusRhythmAlgorithmVersionOne;
+ (id)viewItemWithClassification:(unsigned long long)arg1 sampleAlgorithmVersion:(id)arg2 forAlgorithmVersion:(long long)arg3 learnMoreDelegate:(id)arg4;
+ (id)viewItemWithClassification:(unsigned long long)arg1 sampleAlgorithmVersion:(id)arg2 forAlgorithmVersion:(long long)arg3 upgradingFromAlgorithmVersion:(long long)arg4 learnMoreDelegate:(id)arg5;

- (void).cxx_destruct;
- (id)badge;
- (id)expandedContentItems;
- (id)initWithBadge:(id)arg1 title:(id)arg2 numberedTitle:(id)arg3 visibleBodyText:(id)arg4 videoPath:(id)arg5 expandedContentItems:(id)arg6;
- (id)numberedTitle;
- (id)title;
- (id)videoPath;
- (id)visibleBodyText;

@end
