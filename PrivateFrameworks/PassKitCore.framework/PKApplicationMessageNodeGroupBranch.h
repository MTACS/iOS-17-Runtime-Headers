
@interface PKApplicationMessageNodeGroupBranch : PKApplicationMessageNode {
    NSMutableArray * _children;
    PKApplicationMessageGroupDescriptor * _group;
}

@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) PKApplicationMessageGroupDescriptor *group;

- (void).cxx_destruct;
- (id)group;

@end
