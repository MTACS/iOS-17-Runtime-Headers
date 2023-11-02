
@interface PXSectionedChangeDetailsCoalescer : NSObject {
    PXSectionedDataSourceChangeDetails * _cachedResult;
    long long  _currentToDataSourceIdentifier;
    long long  _fromDataSourceIdentifier;
    NSMutableArray * _itemChangeEntries;
    PXMutableArrayChangeDetails * _sectionChangeDetails;
}

@property (nonatomic, readonly) PXSectionedDataSourceChangeDetails *coalescedChangeDetails;

+ (bool)_verboseLoggingEnabled;
+ (id)changeDetailsByCoalescingChangeDetails:(id)arg1;

- (void).cxx_destruct;
- (void)addChangeDetails:(id)arg1;
- (id)coalescedChangeDetails;
- (id)init;
- (id)initWithSectionedChangeDetails:(id)arg1;

@end
