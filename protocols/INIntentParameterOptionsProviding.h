
@protocol INIntentParameterOptionsProviding <NSObject>

@required

- (void)getParameterOptionsForParameterNamed:(void *)arg1 intent:(void *)arg2 searchTerm:(void *)arg3 completionBlock:(void *)arg4; // needs 4 arg types, found 10: NSString *, INIntent *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INObjectCollection *, NSError *, void*
- (void)getSupportsParameterOptionsForParameterNamed:(void *)arg1 intent:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, INIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
