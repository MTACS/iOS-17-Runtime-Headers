
@interface MFMailPopoverManager : NSObject <UIAdaptivePresentationControllerDelegate> {
    NSMutableArray * _passThroughProviders;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)enumerateManagersUsingBlock:(id /* block */)arg1;
+ (id)managerForWindow:(id)arg1 createIfNeeded:(bool)arg2;

- (void).cxx_destruct;
- (id)_init;
- (void)addPassthroughViewProvider:(id)arg1;
- (id)allPassThroughViews;
- (void)dealloc;
- (id)init;
- (void)removePassthroughViewProvider:(id)arg1;

@end
