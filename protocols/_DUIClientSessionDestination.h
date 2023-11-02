
@protocol _DUIClientSessionDestination <_DUIClientSessionCommon>

@required

- (oneway void)addedItemCollection:(PBItemCollection *)arg1;
- (oneway void)dragEnded;
- (oneway void)handOffDroppedItems:(NSArray *)arg1 withFence:(BKSAnimationFenceHandle *)arg2;
- (oneway void)performDropWithItemCollection:(void *)arg1 dataProviderEndpoint:(void *)arg2 visibleDroppedItems:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: PBItemCollection *, NSXPCListenerEndpoint *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, unsigned long long, void*

@end
