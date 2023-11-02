
@interface HDSPSleepScheduleModelChangeEvaluation : NSObject <BSDescriptionProviding> {
    bool  _isSignificantChange;
    bool  _isSignificantEventRecordUpdate;
    NSSet * _topLevelChangeKeys;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSignificantChange;
@property (nonatomic, readonly) bool isSignificantEventRecordUpdate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *topLevelChangeKeys;

+ (id)combinedEvaluation:(id)arg1;
+ (id)emptyEvaluation;
+ (id)significantChangeWithTopLevelChangeKeys:(id)arg1;
+ (id)significantEventRecordUpdateWithTopLevelChangeKeys:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithIsSignificantChange:(bool)arg1 isSignificantEventRecordUpdate:(bool)arg2 topLevelChangeKeys:(id)arg3;
- (bool)isSignificantChange;
- (bool)isSignificantEventRecordUpdate;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)topLevelChangeKeys;

@end
