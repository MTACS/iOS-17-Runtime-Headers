
@interface CKVOntologyMapper : NSObject

+ (void)_appendSpanProperties:(id)arg1 forAppInfoMatch:(id)arg2;
+ (void)_appendSpanProperties:(id)arg1 forAppShortcutMatch:(id)arg2;
+ (void)_appendSpanProperties:(id)arg1 forAutoShortcutMatch:(id)arg2;
+ (void)_appendSpanProperties:(id)arg1 forContactMatch:(id)arg2;
+ (void)_appendSpanProperties:(id)arg1 forCustomTermMatch:(id)arg2;
+ (void)_appendSpanProperties:(id)arg1 forGlobalTermMatch:(id)arg2;
+ (void)_appendSpanProperties:(id)arg1 forHomeEntityMatch:(id)arg2;
+ (void)_appendSpanProperties:(id)arg1 forLearnedContactMatch:(id)arg2;
+ (void)_appendSpanProperties:(id)arg1 forLearnedMediaEntityMatch:(id)arg2;
+ (void)_appendSpanProperties:(id)arg1 forLinkDynamicTermMatch:(id)arg2;
+ (void)_appendSpanProperties:(id)arg1 forRadioEntityMatch:(id)arg2;
+ (id)_entitySpanForMatch:(id)arg1 startIndex:(unsigned int)arg2 endIndex:(unsigned int)arg3 label:(id)arg4;
+ (struct optional<std::tuple<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *, NSString *const>> { union { BOOL x_1_1_1; struct tuple<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *, NSString *const> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *, NSString *const> { struct OntologyNodeName {} *x_1_3_1; struct OntologyEdgeName {} *x_1_3_2; id x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; bool x2; })_ontologyMappingFromFieldType:(long long)arg1 fieldComponent:(unsigned char)arg2;
+ (struct optional<std::tuple<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *, NSString *const>> { union { BOOL x_1_1_1; struct tuple<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *, NSString *const> { struct __tuple_impl<std::__tuple_indices<0, 1, 2>, const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *, NSString *const> { struct OntologyNodeName {} *x_1_3_1; struct OntologyEdgeName {} *x_1_3_2; id x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; bool x2; })_ontologyMappingFromSpanMatch:(id)arg1;
+ (void)_setIdentifiersOnEdgeNode:(id)arg1 entitySpan:(id)arg2 spanInfo:(id)arg3 probability:(float)arg4;
+ (id)ontologyGraphFromSpanMatch:(id)arg1 outOntologyLabel:(id*)arg2;
+ (id)ontologyLabelFromFieldValueWithType:(long long)arg1;

@end
