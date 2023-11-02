
@interface DDSAssetObserver : NSObject <DDSAssetObserving> {
    <DDSAssetObservingDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _typesToObserve;
}

@property (readonly, copy) NSString *debugDescription;
@property <DDSAssetObservingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableSet *typesToObserve;

- (void).cxx_destruct;
- (void)beginObservingType:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)endObservingTypes:(id)arg1;
- (id)init;
- (void)notifyObserversAssetsUpdatedForType:(id)arg1;
- (void)observeAssetType:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)typesToObserve;

@end
