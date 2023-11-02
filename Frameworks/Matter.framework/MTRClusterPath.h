
@interface MTRClusterPath : NSObject <NSCopying> {
    NSNumber * _cluster;
    NSNumber * _endpoint;
}

@property (nonatomic, readonly, copy) NSNumber *cluster;
@property (nonatomic, readonly, copy) NSNumber *endpoint;

+ (id)clusterPathWithEndpointID:(id)arg1 clusterID:(id)arg2;

- (void).cxx_destruct;
- (id)cluster;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endpoint;
- (unsigned long long)hash;
- (id)initWithPath:(const struct ConcreteClusterPath { unsigned short x1; bool x2; unsigned int x3; }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToClusterPath:(id)arg1;

@end
