
@protocol WFIntentParameterDescription <NSObject>

@required

- (Class)wf_contentItemClass;
- (WFContentItem *)wf_contentItemForValue:(id)arg1;
- (Class)wf_facadeClass;
- (void)wf_getProcessedIntentValueForParameterValue:(void *)arg1 parameter:(void *)arg2 parameterState:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: id, WFParameter *, <WFParameterState> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (bool)wf_multipleValues;
- (Class)wf_objectClass;
- (NSString *)wf_outputDisplayNameWithLocalizer:(INStringLocalizer *)arg1;
- (Class)wf_parameterClass;
- (<WFParameterState> *)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(NSDictionary *)arg2;
- (id)wf_processedParameterValueForValue:(id)arg1;
- (NSString *)wf_slotName;
- (void)wf_updateParameterDictionary:(NSMutableDictionary *)arg1 parameterClass:(Class)arg2 localizer:(INStringLocalizer *)arg3;

@end
