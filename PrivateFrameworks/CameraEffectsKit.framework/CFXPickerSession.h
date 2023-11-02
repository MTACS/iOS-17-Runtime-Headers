
@interface CFXPickerSession : NSObject {
    double  _compactPresentationDuration;
    bool  _didModifyEffectsStack;
    bool  _didRemoveEffect;
    bool  _didScroll;
    double  _expandedPresentationDuration;
    bool  _isCompactPresentation;
    NSDate * _lastCompactPresentationTime;
    NSDate * _lastExpandedPresentationTime;
    NSString * _pickerBundleIdentifier;
    NSDate * _sessionStartTime;
    double * _totalCompactPresentationDuration;
    double * _totalExpandedPresentationDuration;
    NSString * _typeOfRemovedEffect;
}

@property (nonatomic, readonly) double compactPresentationDuration;
@property (nonatomic) bool didModifyEffectsStack;
@property (nonatomic) bool didRemoveEffect;
@property (nonatomic) bool didScroll;
@property (nonatomic, readonly) NSDictionary *effectChangesDict;
@property (nonatomic, readonly) double expandedPresentationDuration;
@property (nonatomic, readonly) bool isCompactPresentation;
@property (nonatomic, readonly) bool isExpandedPresentation;
@property (nonatomic) NSDate *lastCompactPresentationTime;
@property (nonatomic) NSDate *lastExpandedPresentationTime;
@property (nonatomic, readonly) NSString *pickerBundleIdentifier;
@property (nonatomic, readonly) double sessionDuration;
@property (nonatomic, readonly) NSDate *sessionStartTime;
@property (nonatomic) double*totalCompactPresentationDuration;
@property (nonatomic) double*totalExpandedPresentationDuration;
@property (nonatomic) NSString *typeOfRemovedEffect;

- (void).cxx_destruct;
- (double)compactPresentationDuration;
- (void)didChangePresentationMode;
- (void)didDismiss;
- (void)didModifyEffectOfType:(id)arg1 wasRemoval:(bool)arg2;
- (bool)didModifyEffectsStack;
- (bool)didRemoveEffect;
- (bool)didScroll;
- (id)effectChangesDict;
- (double)expandedPresentationDuration;
- (id)initWithIdentifier:(id)arg1 isCompact:(bool)arg2;
- (bool)isCompactPresentation;
- (bool)isExpandedPresentation;
- (id)lastCompactPresentationTime;
- (id)lastExpandedPresentationTime;
- (id)pickerBundleIdentifier;
- (double)sessionDuration;
- (id)sessionStartTime;
- (void)setDidModifyEffectsStack:(bool)arg1;
- (void)setDidRemoveEffect:(bool)arg1;
- (void)setDidScroll:(bool)arg1;
- (void)setLastCompactPresentationTime:(id)arg1;
- (void)setLastExpandedPresentationTime:(id)arg1;
- (void)setTotalCompactPresentationDuration:(double*)arg1;
- (void)setTotalExpandedPresentationDuration:(double*)arg1;
- (void)setTypeOfRemovedEffect:(id)arg1;
- (double*)totalCompactPresentationDuration;
- (double*)totalExpandedPresentationDuration;
- (id)typeOfRemovedEffect;

@end
