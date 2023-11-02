
@interface PXChangeAssetDateAction : PXAssetsAction {
    NSDate * _changeDate;
    double  _dateOffset;
    NSDictionary * _originalDateByLocalIdentifier;
    NSDictionary * _originalTimeZoneByLocalIdentifier;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) NSDate *changeDate;
@property (nonatomic, readonly) double dateOffset;
@property (nonatomic, retain) NSDictionary *originalDateByLocalIdentifier;
@property (nonatomic, retain) NSDictionary *originalTimeZoneByLocalIdentifier;
@property (nonatomic, readonly) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (void)_setDate:(id)arg1 timeZone:(id)arg2 forAsset:(id)arg3;
- (id)_timeZoneForAsset:(id)arg1;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)changeDate;
- (double)dateOffset;
- (id)initWithAssets:(id)arg1 date:(id)arg2 timeZone:(id)arg3;
- (id)initWithAssets:(id)arg1 dateOffset:(double)arg2 timeZone:(id)arg3;
- (id)originalDateByLocalIdentifier;
- (id)originalTimeZoneByLocalIdentifier;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (void)setOriginalDateByLocalIdentifier:(id)arg1;
- (void)setOriginalTimeZoneByLocalIdentifier:(id)arg1;
- (id)timeZone;

@end
