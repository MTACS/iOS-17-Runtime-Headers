
@interface _SFApplicationExtensionActivity : UIApplicationExtensionActivity {
    id /* block */  _customCompletionHandler;
}

@property (nonatomic, copy) id /* block */ customCompletionHandler;

- (void).cxx_destruct;
- (void)activityDidFinish:(bool)arg1 items:(id)arg2 error:(id)arg3;
- (id /* block */)customCompletionHandler;
- (void)setCustomCompletionHandler:(id /* block */)arg1;
- (bool)validateExtensionHasSameContainerAsHostApp:(id)arg1;

@end
