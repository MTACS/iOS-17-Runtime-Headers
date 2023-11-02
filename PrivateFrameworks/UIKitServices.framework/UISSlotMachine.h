
@interface UISSlotMachine : NSObject <UISSlotMachineProtocol> {
    NSMapTable * _LRUTagsByClass;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _LRUTagsByClassLock;
    NSMutableDictionary * _cachedContents;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cachedContentsLock;
    CAContext * _layerContext;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _layerContextLock;
    unsigned long long  _options;
    <UISSlotDrawer> * _slotDrawer;
}

@property (nonatomic, readonly) NSSet *allTags;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allowedLocalizations;

- (void).cxx_destruct;
- (id)allTags;
- (void)getRemoteContentForLayerContextWithId:(unsigned long long)arg1 style:(id)arg2 tag:(id)arg3 reply:(id /* block */)arg4;
- (id)initWithSlotDrawer:(id)arg1 options:(unsigned long long)arg2;
- (id)remoteContentForLayerContextWithId:(unsigned long long)arg1 style:(id)arg2 tag:(id)arg3;
- (void)removeContentForStyle:(id)arg1 tag:(id)arg2;
- (void)removeContentsForTag:(id)arg1;

@end
