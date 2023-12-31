
@protocol TSPReadCoordinator <NSObject>

@required

- (bool)endReading;
- (bool)isReadingFromDocument;
- (void)readComponent:(void *)arg1 completionQueue:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 11: TSPComponent *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, TSPObject *, NSMapTable *, NSError *, void*
- (void)readRootObjectWithCompletionQueue:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 10: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, TSPObject *, NSMapTable *, NSError *, void*

@optional

- (TSPDocumentLoadValidationPolicy *)documentLoadValidationPolicy;
- (void)validateDocumentWithOptions:(void *)arg1 timing:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: unsigned long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSArray *, NSError *, void*

@end
