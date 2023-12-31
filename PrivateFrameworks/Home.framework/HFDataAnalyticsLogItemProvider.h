
@interface HFDataAnalyticsLogItemProvider : HFItemProvider <NSCopying> {
    NSMapTable * _logEntryUniqueIdentifierToLogItemMap;
    NAFuture * _logFetchFuture;
    NSMutableSet * _logItems;
    <HFMediaProfileContainer> * _mediaProfileContainer;
}

@property (nonatomic, readonly) NSMapTable *logEntryUniqueIdentifierToLogItemMap;
@property (nonatomic, retain) NAFuture *logFetchFuture;
@property (nonatomic, readonly) NSMutableSet *logItems;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;

+ (bool)prefersNonBlockingReloads;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithMediaProfileContainer:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)logEntryUniqueIdentifierToLogItemMap;
- (id)logFetchFuture;
- (id)logItems;
- (id)mediaProfileContainer;
- (id)reloadItems;
- (void)setLogFetchFuture:(id)arg1;

@end
