
@interface _UIDebugLogNode : _UIDebugLogMessage {
    NSMutableArray * _childMessages;
    _UIDebugLogNodeTreeStyle * _treeStyle;
}

@property (nonatomic, readonly) bool hasMessages;
@property (nonatomic, retain) _UIDebugLogNodeTreeStyle *treeStyle;

+ (id)rootNode;

- (void).cxx_destruct;
- (void)__genericAppendChildDescription:(id)arg1 withPrefix:(id)arg2 inheritedTreeStyle:(id)arg3 recursionSelector:(SEL)arg4 appendHandler:(id /* block */)arg5;
- (void)_appendAttributedChildDescription:(id)arg1 withPrefix:(id)arg2 inheritedTreeStyle:(id)arg3;
- (void)_appendChildDescription:(id)arg1 withPrefix:(id)arg2 inheritedTreeStyle:(id)arg3;
- (bool)_isNode;
- (void)addMessage:(id)arg1;
- (id)attributedDescription;
- (id)description;
- (bool)hasMessages;
- (id)initWithString:(id)arg1 attributedString:(id)arg2;
- (void)setTreeStyle:(id)arg1;
- (id)treeStyle;

@end
