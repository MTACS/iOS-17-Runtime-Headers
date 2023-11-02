
@interface VKCustomFeatureDataSourceObserverThunk : NSObject <VKCustomFeatureDataSourceObserver> {
    struct _retain_ptr<id<VKCustomFeatureDataSource>, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        <VKCustomFeatureDataSource> *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _dataSource;
    void * _observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearObserver;
- (void)dataSource:(id)arg1 didChangeSceneID:(unsigned char)arg2;
- (void)dataSource:(id)arg1 didChangeSceneState:(unsigned char)arg2;
- (void)dataSource:(id)arg1 featuresDidChangeForRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (void)globalFeaturesDidChangeForDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 observer:(void*)arg2;

@end
