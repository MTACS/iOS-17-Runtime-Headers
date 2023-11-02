
@interface FIReplicaNode : FINode {
    FIDSNode * _node;
}

- (void).cxx_destruct;
- (void*)asTNode;
- (void)dealloc;
- (id)description;
- (id)init:(id)arg1;
- (id)original;

@end
