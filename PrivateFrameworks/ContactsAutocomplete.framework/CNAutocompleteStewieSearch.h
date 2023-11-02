
@interface CNAutocompleteStewieSearch : NSObject <CNAutocompleteSearch>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)executeRequest:(id)arg1 completionHandler:(id /* block */)arg2;

@end
