
@interface PKDashboardSpendingSummaryItem : NSObject <PKDashboardItem> {
    PKSpendingSummary * _spendingSummary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKSpendingSummary *spendingSummary;
@property (readonly) Class superclass;

+ (id)identifier;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setSpendingSummary:(id)arg1;
- (id)spendingSummary;

@end
