
@interface PXBrowserVisibleContentSnapshot : NSObject <PXBrowserVisibleContentSnapshot> {
    unsigned long long  _dateIntervalGranularity;
    NSArray * _locationNames;
}

@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) unsigned long long dateIntervalGranularity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedPlaceholderText;
@property (nonatomic, readonly) NSArray *locationNames;
@property (readonly) Class superclass;

+ (id)snapshotWithIndexPaths:(id)arg1 dataSource:(id)arg2 dateIntervalGranularity:(unsigned long long)arg3;
+ (id)snapshotWithIndexPaths:(id)arg1 dataSource:(id)arg2 dateIntervalGranularity:(unsigned long long)arg3 dateType:(unsigned long long)arg4;

- (void).cxx_destruct;
- (id)dateInterval;
- (unsigned long long)dateIntervalGranularity;
- (id)init;
- (id)initWithDateIntervalGranularity:(unsigned long long)arg1;
- (id)locationNames;

@end
