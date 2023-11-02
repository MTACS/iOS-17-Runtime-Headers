
@protocol HomeKitCore.XPCServerInterface

@required

- (void)fetchModelsWithType:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchModelsWithTypes:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)registerObserver:(void *)arg1 modelTypes:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: <_TtP11HomeKitCore16XPCModelObserver_> *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <_TtP11HomeKitCore26XPCModelPublisherInterface_> *, NSError *, void*

@end
