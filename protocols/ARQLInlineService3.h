
@protocol ARQLInlineService3 <NSObject>

@required

- (void)createInlinePreviewWithUUID:(void *)arg1 initialBounds:(void *)arg2 contextIdReply:(void *)arg3; // needs 3 arg types, found 10: NSUUID *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, unsigned int, NSError *, void*
- (void)inlinePreview:(NSUUID *)arg1 setCameraYaw:(float)arg2 pitch:(float)arg3 scale:(float)arg4 options:(NSDictionary *)arg5;
- (void)inlinePreview:(NSUUID *)arg1 setCurrentTime:(double)arg2;
- (void)inlinePreview:(NSUUID *)arg1 setEnableGradientBackground:(bool)arg2;
- (void)inlinePreview:(NSUUID *)arg1 setEnableShadows:(bool)arg2;
- (void)inlinePreview:(NSUUID *)arg1 setIsLooping:(bool)arg2;
- (void)inlinePreview:(NSUUID *)arg1 setIsMuted:(bool)arg2;
- (void)inlinePreview:(NSUUID *)arg1 setIsPlaying:(bool)arg2;
- (void)inlinePreview:(void *)arg1 setRuntimeStateObserver:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSDictionary *, void*
- (void)observeReturnedToInlineForUUID:(void *)arg1 fenceHandleCompletion:(void *)arg2; // needs 2 arg types, found 9: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSObject<OS_xpc_object> *, NSDictionary *, void*
- (void)prepareFullscreenPreview:(void *)arg1 initialFrame:(void *)arg2 previewOptions:(void *)arg3 fenceHandleCompletion:(void *)arg4; // needs 4 arg types, found 11: NSUUID *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSObject<OS_xpc_object> *, NSError *, void*
- (void)prepareInlinePreviewWithData:(void *)arg1 forUUID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: NSData *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSDictionary *, NSError *, void*
- (void)prepareInlinePreviewWithScopedURLWrapperAttributes:(void *)arg1 forUUID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: ARQLSandboxingURLWrapper *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSDictionary *, NSError *, void*
- (void)sendARQLEvent:(void *)arg1 forUUID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSUUID *, void*
- (void)teardownInlinePreviewWithUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, void*
- (void)touchesBegan:(NSSet *)arg1 forUUID:(NSUUID *)arg2;
- (void)touchesCancelled:(NSSet *)arg1 forUUID:(NSUUID *)arg2;
- (void)touchesEnded:(NSSet *)arg1 forUUID:(NSUUID *)arg2;
- (void)touchesMoved:(NSSet *)arg1 forUUID:(NSUUID *)arg2;
- (void)updateBounds:(void *)arg1 forUUID:(void *)arg2 fenceHandleCompletion:(void *)arg3; // needs 3 arg types, found 10: struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSObject<OS_xpc_object> *, NSError *, void*

@end
