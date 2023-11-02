
@interface SUUITemplateDefinitionViewElement : SUUIViewElement

@property (nonatomic, readonly) SUUIViewElement *contentViewElement;
@property (nonatomic, readonly, copy) NSString *definitionMode;
@property (nonatomic, readonly, copy) NSString *definitionType;
@property (nonatomic, readonly) SUUIPredicateListViewElement *predicateListViewElement;

- (id)contentViewElement;
- (id)definitionMode;
- (id)definitionType;
- (id)predicateListViewElement;

@end
