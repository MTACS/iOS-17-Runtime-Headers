
@interface XRSchemaElementsRecursiveParser : XRXMLElementParser <XRSchemaAnnotationPropertyReportingDelegate> {
    NSMutableDictionary * _errorReplacementsByKey;
}

- (void).cxx_destruct;
- (void)_handleStart;
- (void)elementWithName:(id)arg1 parser:(id)arg2 key:(id)arg3 finishedWithErrorReplacement:(id)arg4;
- (id)errorMessagesReplacements;
- (id)startElementWithName:(id)arg1 attributes:(id)arg2 line:(long long)arg3 col:(long long)arg4;

@end
