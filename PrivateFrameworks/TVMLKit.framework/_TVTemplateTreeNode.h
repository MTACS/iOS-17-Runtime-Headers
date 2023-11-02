
@interface _TVTemplateTreeNode : NSObject {
    NSMutableArray * _derivedTemplateNodes;
    NSArray * _finalURLs;
    bool  _isAbstract;
    NSArray * _styleSheetURLs;
    NSString * _templateName;
}

@property (nonatomic, readonly, copy) NSArray *derivedTemplateNodes;
@property (nonatomic, copy) NSArray *finalURLs;
@property (nonatomic, readonly) bool isAbstract;
@property (nonatomic, readonly, copy) NSArray *styleSheetURLs;
@property (nonatomic, readonly, copy) NSString *templateName;

- (void).cxx_destruct;
- (void)addDerivedTemplateNode:(id)arg1;
- (id)derivedTemplateNodes;
- (id)finalURLs;
- (id)initWithTemplateName:(id)arg1 styleSheetURLs:(id)arg2;
- (id)initWithTemplateName:(id)arg1 styleSheetURLs:(id)arg2 abstract:(bool)arg3;
- (bool)isAbstract;
- (void)setFinalURLs:(id)arg1;
- (id)styleSheetURLs;
- (id)templateName;

@end
