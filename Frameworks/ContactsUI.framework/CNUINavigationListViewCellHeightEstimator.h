
@interface CNUINavigationListViewCellHeightEstimator : NSObject {
    NSNumber * _estimatedCellHeightNumber;
    NSNumber * _estimatedDetailCellHeightNumber;
    <CNUINavigationListStyle> * _navigationListStyle;
}

@property (nonatomic, readonly) double estimatedCellHeight;
@property (nonatomic, retain) NSNumber *estimatedCellHeightNumber;
@property (nonatomic, readonly) double estimatedDetailCellHeight;
@property (nonatomic, retain) NSNumber *estimatedDetailCellHeightNumber;
@property (nonatomic, retain) <CNUINavigationListStyle> *navigationListStyle;

- (void).cxx_destruct;
- (double)estimatedCellHeight;
- (id)estimatedCellHeightNumber;
- (double)estimatedDetailCellHeight;
- (id)estimatedDetailCellHeightNumber;
- (id)initWithNavigationListStyle:(id)arg1;
- (id)navigationListStyle;
- (void)setEstimatedCellHeightNumber:(id)arg1;
- (void)setEstimatedDetailCellHeightNumber:(id)arg1;
- (void)setNavigationListStyle:(id)arg1;

@end
