
@interface PXUserDefaultsStandardDataSource : NSObject <PXUserDefaultsDataSource> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSDate *currentDate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_initAsSharedInstance;
- (id)currentDate;
- (id)init;
- (id)persistedValueForKey:(id)arg1;
- (void)setPersistedValue:(id)arg1 forKey:(id)arg2;

@end
