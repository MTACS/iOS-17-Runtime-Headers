
@interface MTRBindingClusterTargetStruct : NSObject <NSCopying> {
    NSNumber * _cluster;
    NSNumber * _endpoint;
    NSNumber * _fabricIndex;
    NSNumber * _group;
    NSNumber * _node;
}

@property (nonatomic, copy) NSNumber *cluster;
@property (nonatomic, copy) NSNumber *endpoint;
@property (nonatomic, copy) NSNumber *fabricIndex;
@property (nonatomic, copy) NSNumber *group;
@property (nonatomic, copy) NSNumber *node;

- (void).cxx_destruct;
- (id)cluster;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endpoint;
- (id)fabricIndex;
- (id)group;
- (id)init;
- (id)node;
- (void)setCluster:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setFabricIndex:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setNode:(id)arg1;

@end
