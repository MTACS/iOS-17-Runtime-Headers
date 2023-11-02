
@interface _OnDiskArchiveReader : NSObject <_ArchiveReader> {
    NSArray * _layerInfos;
    NSString * _modelPath;
    NSDictionary * _netJson;
    NSDictionary * _shapeJson;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *layerInfos;
@property (nonatomic, readonly, copy) NSString *modelPath;
@property (nonatomic, readonly, copy) NSDictionary *netJson;
@property (nonatomic, readonly, copy) NSDictionary *shapeJson;
@property (readonly) Class superclass;

+ (id)modelName;
+ (id)modelNetFileName;
+ (id)modelShapeFileName;
+ (id)parseCompiledNetworkBlobWithName:(id)arg1 archive:(void*)arg2 error:(id*)arg3;
+ (id)readerFromArchiver:(void*)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)copyLayerShapesToContainer:(id)arg1;
- (id)initWithNetJson:(id)arg1 shapeJson:(id)arg2 modelPath:(id)arg3;
- (id)layerInfos;
- (id)loadUpdatableParams:(id*)arg1;
- (id)modelPath;
- (id)netJson;
- (id)shapeJson;
- (id)transformParams;

@end
