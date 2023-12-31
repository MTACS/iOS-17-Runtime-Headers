
@interface CAIAANodeInfo : NSObject {
    UIColor * labelColor;
    NSMutableArray * nodeList;
}

@property (retain) UIColor *labelColor;
@property (readonly) unsigned long long numNodes;

- (void)createNodeList;
- (id)init;
- (id)labelColor;
- (id)nodeAtIndex:(unsigned long long)arg1;
- (id)nodeWithNodeInfo:(id)arg1;
- (unsigned long long)numNodes;
- (void)refresh;
- (void)setLabelColor:(id)arg1;

@end
