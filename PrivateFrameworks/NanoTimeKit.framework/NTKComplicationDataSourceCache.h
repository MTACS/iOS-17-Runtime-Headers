
@interface NTKComplicationDataSourceCache : NSObject {
    int  _capabilitiesChangedNotificationToken;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_cache;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (Class)_dataSourceClassForComplicationType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (void)_invalidateCache;
- (Class)dataSourceClassForComplicationType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (void)dealloc;
- (id)init;

@end
