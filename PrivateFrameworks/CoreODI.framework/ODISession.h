
@interface ODISession : NSObject {
    _TtC7CoreODI18ODISessionInternal * _internalSession;
    NSDate * _lastAttributeDate;
}

@property (nonatomic, readonly) _TtC7CoreODI18ODISessionInternal *_internalSession;
@property (nonatomic, readonly) NSDate *_lastAttributeDate;

+ (void)_initLogCategories;

- (void).cxx_destruct;
- (id)_internalSession;
- (id)_lastAttributeDate;
- (void)dealloc;
- (id)description;
- (void)getAssessment:(id /* block */)arg1;
- (void)getAssessmentForTransaction:(id /* block */)arg1;
- (id)initForTransaction;
- (id)initWithServiceIdentifier:(id)arg1 forDSIDType:(unsigned long long)arg2;
- (id)initWithServiceIdentifier:(id)arg1 forDSIDType:(unsigned long long)arg2 andLocationBundle:(id)arg3;
- (id)initWithServiceIdentifier:(id)arg1 forDSIDType:(unsigned long long)arg2 andLocationBundleIdentifier:(id)arg3;
- (void)provideFeedbackOnPayloadOutcome:(unsigned long long)arg1;
- (void)updateWithAdditionalAttributes:(id)arg1;

@end
