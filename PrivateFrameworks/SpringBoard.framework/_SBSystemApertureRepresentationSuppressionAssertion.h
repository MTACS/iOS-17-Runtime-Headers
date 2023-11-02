
@interface _SBSystemApertureRepresentationSuppressionAssertion : NSObject <BSInvalidatable> {
    bool  __valid;
    bool  _coverSheetVisible;
    id /* block */  _invalidationBlock;
    bool  _liquidDetectionVisible;
    bool  _suppressForSystemChromeSuppression;
}

@property (getter=_isValid, setter=_setValid:, nonatomic) bool _valid;
@property (getter=isCoverSheetVisible, nonatomic, readonly) bool coverSheetVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLiquidDetectionVisible, nonatomic, readonly) bool liquidDetectionVisible;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool suppressForSystemChromeSuppression;

- (void).cxx_destruct;
- (bool)_isValid;
- (void)_setValid:(bool)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithCoverSheetVisible:(bool)arg1 liquidDetectionVisible:(bool)arg2 suppressForSystemChromeSuppression:(bool)arg3 invalidationBlock:(id /* block */)arg4;
- (void)invalidate;
- (bool)isCoverSheetVisible;
- (bool)isLiquidDetectionVisible;
- (bool)suppressForSystemChromeSuppression;

@end
