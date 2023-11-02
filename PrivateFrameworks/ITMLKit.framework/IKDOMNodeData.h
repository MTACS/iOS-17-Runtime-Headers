
@interface IKDOMNodeData : NSObject {
    bool  _autoHighlightRead;
    bool  _bindingParsed;
    bool  _childrenUpdated;
    bool  _dataResolved;
    NSMutableDictionary * _featuresMap;
    IKDOMNode * _ownerJSNode;
    bool  _prototypesResolved;
    bool  _rulesParsed;
    bool  _subtreeUpdated;
    bool  _updated;
}

@property (getter=isAutoHighlightRead, nonatomic) bool autoHighlightRead;
@property (getter=isBindingParsed, nonatomic) bool bindingParsed;
@property (getter=isChildrenUpdated, nonatomic) bool childrenUpdated;
@property (nonatomic, readonly) bool containsUpdates;
@property (getter=isDataResolved, nonatomic) bool dataResolved;
@property (nonatomic, retain) NSMutableDictionary *featuresMap;
@property (nonatomic) IKDOMNode *ownerJSNode;
@property (getter=arePrototypesResolved, nonatomic) bool prototypesResolved;
@property (getter=areRulesParsed, nonatomic) bool rulesParsed;
@property (getter=isSubtreeUpdated, nonatomic) bool subtreeUpdated;
@property (getter=isUpdated, nonatomic) bool updated;

+ (id)jsNodeDataForNode:(id)arg1;

- (void).cxx_destruct;
- (bool)arePrototypesResolved;
- (bool)areRulesParsed;
- (bool)containsUpdates;
- (id)featureForName:(id)arg1;
- (id)featuresMap;
- (bool)isAutoHighlightRead;
- (bool)isBindingParsed;
- (bool)isChildrenUpdated;
- (bool)isDataResolved;
- (bool)isSubtreeUpdated;
- (bool)isUpdated;
- (id)ownerJSNode;
- (void)setAutoHighlightRead:(bool)arg1;
- (void)setBindingParsed:(bool)arg1;
- (void)setChildrenUpdated:(bool)arg1;
- (void)setDataResolved:(bool)arg1;
- (void)setFeature:(id)arg1 forName:(id)arg2;
- (void)setFeaturesMap:(id)arg1;
- (void)setOwnerJSNode:(id)arg1;
- (void)setPrototypesResolved:(bool)arg1;
- (void)setRulesParsed:(bool)arg1;
- (void)setSubtreeUpdated:(bool)arg1;
- (void)setUpdated:(bool)arg1;

@end
