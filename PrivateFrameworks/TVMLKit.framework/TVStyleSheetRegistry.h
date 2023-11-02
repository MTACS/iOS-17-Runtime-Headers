
@interface TVStyleSheetRegistry : NSObject {
    NSMutableDictionary * _nodesByTemplateName;
    NSMutableArray * _rootNodes;
}

@property (nonatomic, retain) NSMutableDictionary *nodesByTemplateName;
@property (nonatomic, retain) NSMutableArray *rootNodes;

+ (id)_urlForStyleSheetName:(id)arg1;

- (void).cxx_destruct;
- (void)_commitTemplateTreeNode:(id)arg1 withParentStyleSheetURLs:(id)arg2;
- (void)_createDefaultRootNodes;
- (void)commitStyleSheets;
- (id)init;
- (id)nodesByTemplateName;
- (void)registerStyleSheetURLs:(id)arg1 forTemplateName:(id)arg2 basedOnTemplateName:(id)arg3;
- (id)rootNodes;
- (void)setNodesByTemplateName:(id)arg1;
- (void)setRootNodes:(id)arg1;

@end
