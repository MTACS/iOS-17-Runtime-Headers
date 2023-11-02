
@interface _DASWidgetInfo : NSObject {
    NSString * _budgetID;
    NSString * _extensionBundleID;
}

@property (nonatomic, readonly, copy) NSString *budgetID;
@property (nonatomic, readonly, copy) NSString *extensionBundleID;
@property (nonatomic, copy) NSString *widgetID;

- (void).cxx_destruct;
- (id)_initWithBudgetID:(id)arg1 extensionBundleID:(id)arg2;
- (id)budgetID;
- (id)extensionBundleID;
- (void)setWidgetID:(id)arg1;
- (id)widgetID;

@end
