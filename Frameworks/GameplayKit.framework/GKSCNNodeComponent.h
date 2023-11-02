
@interface GKSCNNodeComponent : GKComponent <GKAgentDelegate, GKSerializedNodeContaining> {
    SCNNode * _node;
    NSIndexPath * _serializableNodeIndexPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SCNNode *node;
@property (nonatomic, retain) NSIndexPath *serializableNodeIndexPath;
@property (readonly) Class superclass;

+ (id)componentWithNode:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)agentDidUpdate:(id)arg1;
- (void)agentWillUpdate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNode:(id)arg1;
- (id)node;
- (id)serializableNodeIndexPath;
- (void)setEntity:(id)arg1;
- (void)setNode:(id)arg1;
- (void)setSerializableNodeIndexPath:(id)arg1;

@end