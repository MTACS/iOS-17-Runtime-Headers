
@interface MTRAttributePath : MTRClusterPath {
    NSNumber * _attribute;
}

@property (nonatomic, readonly, copy) NSNumber *attribute;

+ (id)attributePathWithEndpointID:(id)arg1 clusterID:(id)arg2 attributeID:(id)arg3;
+ (id)attributePathWithEndpointId:(id)arg1 clusterId:(id)arg2 attributeId:(id)arg3;

- (void).cxx_destruct;
- (struct ConcreteAttributePath { unsigned short x1; bool x2; unsigned int x3; unsigned int x4; })_asConcretePath;
- (id)attribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPath:(const void*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAttributePath:(id)arg1;

@end
