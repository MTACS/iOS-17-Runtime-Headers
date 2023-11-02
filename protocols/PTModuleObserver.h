
@protocol PTModuleObserver <NSObject>

@required

- (void)module:(PTModule *)arg1 didInsertRows:(NSArray *)arg2 deleteRows:(NSArray *)arg3;
- (void)module:(PTModule *)arg1 didInsertSections:(NSIndexSet *)arg2 deleteSections:(NSIndexSet *)arg3;
- (void)moduleDidReload:(PTModule *)arg1;

@end
