
@protocol HDSampleSaving

@required

- (void)performIfAuthorizedToDeleteObjectTypes:(void *)arg1 usingBlock:(void *)arg2 errorHandler:(void *)arg3; // needs 3 arg types, found 13: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)performIfAuthorizedToSaveObjectTypes:(void *)arg1 usingBlock:(void *)arg2 errorHandler:(void *)arg3; // needs 3 arg types, found 12: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)saveSamples:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
