
@protocol MPEntityRelationshipTranslator <NSObject>

@required

- (id)initWithRelatedMPModelClass:(Class)arg1;
- (Class)relatedMPModelClass;

@optional

- (id)prepareSource:(id)arg1 context:(id)arg2;

@end
