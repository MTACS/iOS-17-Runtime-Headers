
@protocol INListShortcutsIntentExport <NSObject, JSExport>

@required

- (NSArray *)appTitles;
- (id)init;
- (long long)originDevice;
- (void)setAppTitles:(NSArray *)arg1;
- (void)setOriginDevice:(long long)arg1;

@end
