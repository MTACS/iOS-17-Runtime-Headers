
@interface WFDailyRoutineShortcutSetupTriggerBuilder : NSObject {
    NSString * _subtitle;
    WFTrigger * _templateTrigger;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) WFTrigger *templateTrigger;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 templateTrigger:(id)arg3;
- (id)subtitle;
- (id)templateTrigger;
- (id)title;
- (id)triggerWithConfiguration:(id)arg1;

@end
