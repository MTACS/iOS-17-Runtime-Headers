
@interface PXPhotosViewEventTracker : PXMediaViewControllerEventTracker <PXChangeObserver, PXPhotosViewEventTracker> {
    NSNumber * _isInSelectModeValue;
    double  _isInSelectModeValueTimestamp;
    PXPhotosViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *isInSelectModeValue;
@property (nonatomic, readonly) double isInSelectModeValueTimestamp;
@property (nonatomic, copy) NSMutableDictionary *payload;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXPhotosViewModel *viewModel;

+ (id)analyticsViewNameForDataSource:(id)arg1;
+ (double)selectModeImpressionMinimumDuration;

- (void).cxx_destruct;
- (void)_invalidateTrackedValues;
- (void)_updateTrackedValues;
- (id)initWithViewModel:(id)arg1;
- (id)initWithViewName:(id)arg1;
- (id)isInSelectModeValue;
- (double)isInSelectModeValueTimestamp;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setIsInSelectModeValue:(id)arg1;
- (id)viewModel;

@end
