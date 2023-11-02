
@protocol PTComponentObserver <NSObject>

@required

- (void)enabledSectionsDidChange:(id <PTModuleComponent>)arg1;
- (void)section:(PTSection *)arg1 didInsertRows:(NSIndexSet *)arg2 deleteRows:(NSIndexSet *)arg3;
- (void)sectionDidReload:(PTSection *)arg1;

@end
