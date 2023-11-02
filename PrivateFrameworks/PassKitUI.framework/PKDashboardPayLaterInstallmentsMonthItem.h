
@interface PKDashboardPayLaterInstallmentsMonthItem : NSObject <PKDashboardItem> {
    <PKCalendarMonthAppearance> * _appearance;
    <PKCalendarMonthDataSource> * _dataSource;
    PKPayLaterInstallmentsMonth * _installmentsMonth;
}

@property (nonatomic, readonly) <PKCalendarMonthAppearance> *appearance;
@property (nonatomic, readonly) <PKCalendarMonthDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPayLaterInstallmentsMonth *installmentsMonth;
@property (readonly) Class superclass;

+ (id)identifier;

- (void).cxx_destruct;
- (id)appearance;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1 appearance:(id)arg2 installmentsMonth:(id)arg3;
- (id)installmentsMonth;

@end
