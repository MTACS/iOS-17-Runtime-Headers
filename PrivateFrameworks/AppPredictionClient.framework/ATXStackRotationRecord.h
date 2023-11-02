
@interface ATXStackRotationRecord : NSObject {
    NSString * _clientModelId;
    double  _coolDownInterval;
    NSString * _criterion;
    double  _durationLimit;
    NSString * _extensionBundleId;
    NSString * _infoSuggestionId;
    INIntent * _intent;
    bool  _isStalenessRotation;
    NSDate * _rotationDate;
    NSString * _widgetKind;
}

@property (nonatomic, readonly) NSString *clientModelId;
@property (nonatomic, readonly) double coolDownInterval;
@property (nonatomic, readonly) NSString *criterion;
@property (nonatomic, readonly) double durationLimit;
@property (nonatomic, readonly) NSString *extensionBundleId;
@property (nonatomic, readonly) NSString *infoSuggestionId;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) bool isStalenessRotation;
@property (nonatomic, readonly) NSDate *rotationDate;
@property (nonatomic, readonly) NSString *widgetKind;

- (void).cxx_destruct;
- (id)clientModelId;
- (double)coolDownInterval;
- (id)criterion;
- (double)durationLimit;
- (id)extensionBundleId;
- (id)infoSuggestionId;
- (id)init;
- (id)initWithInfoSuggestionId:(id)arg1 clientModelId:(id)arg2 criterion:(id)arg3 widget:(id)arg4 kind:(id)arg5 intent:(id)arg6 isStalenessRotation:(bool)arg7 rotationDate:(id)arg8 durationLimit:(double)arg9 coolDownInterval:(double)arg10;
- (id)intent;
- (bool)isStalenessRotation;
- (id)rotationDate;
- (id)widgetKind;

@end
