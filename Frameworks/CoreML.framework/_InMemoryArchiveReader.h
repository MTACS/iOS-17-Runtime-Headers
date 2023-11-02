
@interface _InMemoryArchiveReader : NSObject <_ArchiveReader> {
    NSArray * _layerInfos;
    struct shared_ptr<Espresso::net> { 
        struct net {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _network;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *layerInfos;
@property (nonatomic, readonly, copy) NSString *modelPath;
@property (readonly) Class superclass;

+ (id)modelName;
+ (id)readerFromArchiver:(void*)arg1 error:(id*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)copyLayerShapesToContainer:(id)arg1;
- (id)initWithNetwork:(struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)layerInfos;
- (id)loadUpdatableParams:(id*)arg1;
- (id)modelPath;
- (id)transformParams;

@end
