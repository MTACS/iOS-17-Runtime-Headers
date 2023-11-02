
@interface _DASWigetBudgetDecrementRequestResult : NSObject {
    NSNumber * _balance;
    bool  _successful;
    NSString * _widgetBudgetID;
}

@property (nonatomic, retain) NSNumber *balance;
@property (nonatomic) bool successful;
@property (nonatomic, retain) NSString *widgetBudgetID;

- (void).cxx_destruct;
- (id)balance;
- (void)setBalance:(id)arg1;
- (void)setSuccessful:(bool)arg1;
- (void)setWidgetBudgetID:(id)arg1;
- (bool)successful;
- (id)widgetBudgetID;

@end
