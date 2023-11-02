
@interface cnodeBuilder : NSObject {
    cNodeRestriction * _rootNode;
    unsigned int  _ulType;
    unsigned int  _weight;
}

@property (retain) cNodeRestriction *rootNode;
@property unsigned int ulType;
@property unsigned int weight;

- (void).cxx_destruct;
- (int)appendRestriction:(id)arg1;
- (id)initWithType:(unsigned int)arg1 Weight:(unsigned int)arg2;
- (id)rootNode;
- (void)setRootNode:(id)arg1;
- (void)setUlType:(unsigned int)arg1;
- (void)setWeight:(unsigned int)arg1;
- (unsigned int)ulType;
- (unsigned int)weight;

@end
