
@interface NLNLPLanguageModelNode : NSObject {
    NSMutableDictionary * _children;
    NSMutableSet * _strings;
    NSArray * _tokenIDs;
}

+ (id)conditionalProbabilitiesForStrings:(id)arg1 modelState:(void*)arg2 copyRequired:(bool)arg3;

- (void).cxx_destruct;
- (void)_addString:(id)arg1 tokenIDs:(id)arg2;
- (void)_evaluateChildrenWithModelState:(void*)arg1 copyRequired:(bool)arg2 probability:(double)arg3 dictionary:(id)arg4;
- (void)_setProbability:(double)arg1 dictionary:(id)arg2;
- (id)_treeDescriptionWithPrefix:(id)arg1;
- (id)description;
- (id)initWithTokenIDs:(id)arg1;
- (bool)isLeaf;
- (id)treeDescription;

@end
