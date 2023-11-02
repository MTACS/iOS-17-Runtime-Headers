
@protocol WFVariableStringContent <NSObject>

@required

- (void)wf_getContentItemsWithContext:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: WFParameterStateProcessingContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (unsigned long long)wf_lengthInVariableString;

@end
