
@interface SKUITemplateDefinitionViewElement : SKUIViewElement

@property (nonatomic, readonly) SKUIViewElement *contentViewElement;
@property (nonatomic, readonly, copy) NSString *definitionMode;
@property (nonatomic, readonly, copy) NSString *definitionType;
@property (nonatomic, readonly) SKUIPredicateListViewElement *predicateListViewElement;

- (id)contentViewElement;
- (id)definitionMode;
- (id)definitionType;
- (id)predicateListViewElement;

@end
