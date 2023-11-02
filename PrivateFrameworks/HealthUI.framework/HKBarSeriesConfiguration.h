
@interface HKBarSeriesConfiguration : NSObject {
    HKFillStyle * _inactiveFillStyle;
    id /* block */  _isIncludedBlock;
    HKFillStyle * _selectedFillStyle;
    HKFillStyle * _unselectedFillStyle;
}

@property (nonatomic, retain) HKFillStyle *inactiveFillStyle;
@property (nonatomic, copy) id /* block */ isIncludedBlock;
@property (nonatomic, retain) HKFillStyle *selectedFillStyle;
@property (nonatomic, retain) HKFillStyle *unselectedFillStyle;

- (void).cxx_destruct;
- (id)inactiveFillStyle;
- (id /* block */)isIncludedBlock;
- (id)selectedFillStyle;
- (void)setInactiveFillStyle:(id)arg1;
- (void)setIsIncludedBlock:(id /* block */)arg1;
- (void)setSelectedFillStyle:(id)arg1;
- (void)setUnselectedFillStyle:(id)arg1;
- (id)unselectedFillStyle;

@end
