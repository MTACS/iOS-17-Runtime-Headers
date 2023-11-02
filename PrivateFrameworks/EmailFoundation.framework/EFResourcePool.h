
@interface EFResourcePool : NSObject {
    EFQueue * _activeResources;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _handleResourceLock;
    NSMutableSet * _inactiveResources;
    unsigned long long  _uncreatedResourcesCount;
}

@property (nonatomic, readonly) EFQueue *activeResources;
@property (nonatomic, readonly) NSMutableSet *inactiveResources;
@property (nonatomic) unsigned long long uncreatedResourcesCount;

- (void).cxx_destruct;
- (id)acquireResource;
- (id)activeResources;
- (id)inactiveResources;
- (id)initWithCount:(unsigned long long)arg1;
- (void)releaseResource:(id)arg1;
- (void)setUncreatedResourcesCount:(unsigned long long)arg1;
- (unsigned long long)uncreatedResourcesCount;

@end
