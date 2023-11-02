
@protocol WFDynamicResolveParameterDataSource <NSObject>

@required

- (void)localizedDisambiguationPromptForItems:(void *)arg1 intent:(void *)arg2 dynamicResolveParameter:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSArray *, INIntent *, WFDynamicResolveParameter *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)resolveOptionsForUserInput:(void *)arg1 forDynamicResolveParameter:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 11: NSString *, WFDynamicResolveParameter *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, long long, INIntent *, NSError *, void*

@end
