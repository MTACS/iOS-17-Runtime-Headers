
@interface SXTangierDragItemProvider : NSObject <SXTangierDragItemProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)dragItemForSmartField:(id)arg1 interaction:(id)arg2 session:(id)arg3;
- (bool)session:(id)arg1 containsURL:(id)arg2;

@end
