
@interface ATXInformationDismissRecord : NSObject {
    NSDate * _blockCriterionUntilDate;
    NSDate * _blockWidgetUntilDate;
    NSString * _criterion;
    NSString * _widgetBundleId;
}

@property (nonatomic, readonly) NSDate *blockCriterionUntilDate;
@property (nonatomic, readonly) NSDate *blockWidgetUntilDate;
@property (nonatomic, readonly) NSString *criterion;
@property (nonatomic, readonly) NSString *widgetBundleId;

- (void).cxx_destruct;
- (id)blockCriterionUntilDate;
- (id)blockWidgetUntilDate;
- (id)criterion;
- (id)init;
- (id)initWithWidgetBundleId:(id)arg1 criterion:(id)arg2 blockWidgetUntilDate:(id)arg3 blockCriterionUntilDate:(id)arg4;
- (id)widgetBundleId;

@end
