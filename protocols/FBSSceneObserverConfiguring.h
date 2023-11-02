
@protocol FBSSceneObserverConfiguring

@required

- (void)actionClasses:(NSArray *)arg1;
- (void)actionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSSet *, id /* block */, FBSScene *, NSSet *, void*
- (void)actions:(Class)arg1;
- (void)clientSettingNames:(NSArray *)arg1;
- (void)clientSettings:(SEL)arg1;
- (void)clientUpdateHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSScene *, FBSSceneUpdate *, void*
- (void)invalidationHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSScene *, void*
- (void)settingNames:(NSArray *)arg1;
- (void)settings:(SEL)arg1;
- (void)updateHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSScene *, FBSSceneUpdate *, void*

@end
