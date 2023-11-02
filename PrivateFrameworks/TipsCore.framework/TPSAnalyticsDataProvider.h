
@interface TPSAnalyticsDataProvider : NSObject {
    <TPSAnalyticsDataProviderDataSource> * _dataSource;
}

@property (nonatomic) <TPSAnalyticsDataProviderDataSource> *dataSource;

- (void).cxx_destruct;
- (id)bundleIDForIdentifier:(id)arg1;
- (id)contextForIdentifier:(id)arg1;
- (id)correlationIDForIdentifier:(id)arg1;
- (id)dataSource;
- (id)deliveryInfoVersion;
- (id)displayTypeForIdentifier:(id)arg1;
- (id)experimentCampID;
- (id)experimentID;
- (unsigned long long)hintDisplayedCountForIdentifier:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (void)setDataSource:(id)arg1;

@end
