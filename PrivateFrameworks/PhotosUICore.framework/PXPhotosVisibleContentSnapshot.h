
@interface PXPhotosVisibleContentSnapshot : NSObject <PXBrowserVisibleContentSnapshot> {
    long long  _dataSourceIdentifier;
    id /* block */  _dateIntervalFuture;
    unsigned long long  _dateIntervalGranularity;
    bool  _isFiltering;
    id /* block */  _locationNamesFuture;
}

@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) unsigned long long dateIntervalGranularity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedPlaceholderText;
@property (nonatomic, readonly) NSArray *locationNames;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dateInterval;
- (unsigned long long)dateIntervalGranularity;
- (id)init;
- (id)initWithPhotosLayout:(id)arg1 dateType:(unsigned long long)arg2 dateIntervalGranularity:(unsigned long long)arg3;
- (id)localizedPlaceholderText;
- (id)locationNames;

@end
