
@interface MTRCommandPath : MTRClusterPath {
    NSNumber * _command;
}

@property (nonatomic, readonly, copy) NSNumber *command;

+ (id)commandPathWithEndpointID:(id)arg1 clusterID:(id)arg2 commandID:(id)arg3;
+ (id)commandPathWithEndpointId:(id)arg1 clusterId:(id)arg2 commandId:(id)arg3;

- (void).cxx_destruct;
- (id)command;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithPath:(const struct ConcreteCommandPath { unsigned short x1; bool x2; unsigned int x3; unsigned int x4; }*)arg1;

@end
