
@interface HKDisplayTypePresentation : NSObject <NSCopying> {
    NSDictionary * _configurationOverrides;
    HKDisplayTypePresentationConfiguration * _defaultConfiguration;
    NSString * _detailImageName;
    bool  _isCriticalForAutoscale;
    NSString * _listIconImageNameOverride;
    double  _scaleFactor;
    bool  _shouldDisplayUnitStringOnYAxis;
    bool  _showAllDataHierarchically;
    bool  _showAppDataHierarchically;
    HKDisplayTypeSummaryAttribution * _summaryAttribution;
    bool  _useSecondsWhenDisplayingDuration;
}

@property (nonatomic, readonly, copy) NSString *detailImageName;
@property (nonatomic, readonly) bool isCriticalForAutoscale;
@property (nonatomic, readonly, copy) NSString *listIconImageNameOverride;
@property (nonatomic, readonly) double scaleFactor;
@property (nonatomic, readonly) bool shouldDisplayUnitStringOnYAxis;
@property (nonatomic, readonly) bool showAllDataHierarchically;
@property (nonatomic, readonly) bool showAppDataHierarchically;
@property (nonatomic, readonly, copy) HKDisplayTypeSummaryAttribution *summaryAttribution;
@property (nonatomic, readonly) bool useSecondsWhenDisplayingDuration;

- (void).cxx_destruct;
- (double)adjustedDoubleForClientDouble:(double)arg1;
- (double)adjustedDoubleForDaemonDouble:(double)arg1;
- (id)adjustedValueForClientValue:(id)arg1;
- (id)adjustedValueForDaemonValue:(id)arg1;
- (id)configurationForTimeScope:(long long)arg1;
- (id)copyWithIsCriticalForAutoscale:(bool)arg1;
- (id)copyWithListIconImageNameOverride:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detailImageName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDefaultConfiguration:(id)arg1 configurationOverrides:(id)arg2 scaleFactor:(double)arg3 showAllDataHierarchically:(bool)arg4 showAppDataHierarchically:(bool)arg5 shouldDisplayUnitStringOnYAxis:(bool)arg6 useSecondsWhenDisplayingDuration:(bool)arg7 isCriticalForAutoscale:(bool)arg8 detailImageName:(id)arg9 listIconImageNameOverride:(id)arg10 summaryAttribution:(id)arg11;
- (bool)isCriticalForAutoscale;
- (bool)isEqual:(id)arg1;
- (id)listIconImageNameOverride;
- (double)scaleFactor;
- (bool)shouldDisplayUnitStringOnYAxis;
- (bool)showAllDataHierarchically;
- (bool)showAppDataHierarchically;
- (id)summaryAttribution;
- (bool)useSecondsWhenDisplayingDuration;

@end
