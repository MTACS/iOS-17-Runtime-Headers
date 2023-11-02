
@interface _DASWidgetBudgetParameters : NSObject {
    unsigned long long  _dailyMaxBudget;
    unsigned long long  _systemAddedWidgetMaxBudget;
    unsigned long long  _widgetMaxBudget;
}

@property (nonatomic) unsigned long long dailyMaxBudget;
@property (nonatomic) unsigned long long systemAddedWidgetMaxBudget;
@property (nonatomic) unsigned long long widgetMaxBudget;

- (unsigned long long)dailyMaxBudget;
- (void)setDailyMaxBudget:(unsigned long long)arg1;
- (void)setSystemAddedWidgetMaxBudget:(unsigned long long)arg1;
- (void)setWidgetMaxBudget:(unsigned long long)arg1;
- (unsigned long long)systemAddedWidgetMaxBudget;
- (unsigned long long)widgetMaxBudget;

@end
