
@interface MLLayerPath : NSObject <NSCopying> {
    NSString * _layerName;
    NSArray * _scopedModelNames;
}

@property (nonatomic, copy) NSString *layerName;
@property (nonatomic, copy) NSArray *scopedModelNames;

- (void).cxx_destruct;
- (void)appendPathComponent:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithScopedModelAndLayerName:(id)arg1 layerName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMLLayerPath:(id)arg1;
- (id)layerName;
- (id)scopedModelNames;
- (void)setLayerName:(id)arg1;
- (void)setScopedModelNames:(id)arg1;

@end
