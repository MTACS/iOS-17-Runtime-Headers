
@interface DSFPItemStatusObserver : NSObject <FPItemCollectionItemIDBasedDelegate> {
    NSError * _FPError;
    FPItemCollection * _collection;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _observingLock;
    struct TString { 
        struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { 
            struct __CFString {} *fRef; 
        } fString; 
    }  _parentIdentifier;
    struct TNodePtr { 
        FINode *fFINode; 
    }  _parentNode;
    bool  _populated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPopulated, nonatomic) bool populated;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)collection:(id)arg1 didEncounterError:(id)arg2;
- (void)collection:(id)arg1 didUpdateItems:(id)arg2 replaceItemsByFormerID:(id)arg3 deleteItemsWithIDs:(id)arg4;
- (void)collection:(id)arg1 didUpdateObservedItem:(id)arg2;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (id)fpError;
- (id)fpItems;
- (bool)isPopulated;
- (void)resetError;
- (void)setPopulated:(bool)arg1;
- (void)startObserving:(id)arg1 forParent:(const struct TNodePtr { id x1; }*)arg2 withQueue:(id)arg3;
- (void)stopObserving;
- (void)updateFPItems:(id)arg1;
- (void)updateNodesFPItemsFromCollection:(const void*)arg1;

@end
