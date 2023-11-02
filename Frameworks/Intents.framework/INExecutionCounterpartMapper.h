
@interface INExecutionCounterpartMapper : NSObject {
    bool  _filled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _mapping;
}

@property (nonatomic, readonly) bool _filled;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } _lock;
@property (nonatomic, readonly, copy) NSMutableDictionary *_mapping;

+ (void)initialize;

- (void).cxx_destruct;
- (bool)_filled;
- (struct os_unfair_lock_s { unsigned int x1; })_lock;
- (id)_mapping;
- (id)counterpartBundleIdentifiersForBundleIdentifier:(id)arg1;
- (id)counterpartIdentifiersForLocalIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)installedApplicationsDidChange:(id)arg1;
- (id)localIdentifiersForCounterpartIdentifier:(id)arg1;
- (void)reset;

@end
