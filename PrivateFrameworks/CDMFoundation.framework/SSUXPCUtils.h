
@interface SSUXPCUtils : NSObject

+ (void)dispatchAsyncWithTransaction:(id)arg1 block:(id /* block */)arg2;
+ (id)extractSingleBundleId:(id)arg1;
+ (id)extractUserInfo:(id)arg1;
+ (bool)isCoreDataObjectArrayShortcutsChange:(id)arg1;
+ (bool)isCoreDataObjectShortcutsChange:(id)arg1;
+ (bool)isPlaceholder:(id)arg1;
+ (bool)isShortcutsChange:(id)arg1;

@end
