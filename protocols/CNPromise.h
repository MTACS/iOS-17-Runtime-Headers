
@protocol CNPromise <NSObject>

@required

- (id /* block */)boolErrorCompletionHandlerAdapter:(void *)arg1; // needs 1 arg types, found 6: id /* block */, bool, NSError *, void*, id, SEL
- (id /* block */)completionHandlerAdapter:(void *)arg1; // needs 1 arg types, found 6: id /* block */, id, NSError *, void*, id, SEL
- (id /* block */)completionHandlerAdapterWithDefaultValue:(void *)arg1; // needs 1 arg types, found 7: id /* block */, id, NSError *, void*, id, SEL, id
- (id /* block */)errorOnlyCompletionHandlerAdapter:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSError *, void*, id, SEL
- (bool)finishWithError:(NSError *)arg1;
- (bool)finishWithResult:(id)arg1;
- (bool)finishWithResult:(id)arg1 error:(NSError *)arg2;

@end
