
@interface TabMenuProvider : NSObject

+ (id)_bottomMenuForTabDocument:(id)arg1 dataSource:(id)arg2 options:(unsigned long long)arg3;
+ (id)_closeActionForTab:(id)arg1 inBackgroundTabGroup:(id)arg2 dataSource:(id)arg3;
+ (id)_closeActionForTabDocument:(id)arg1 dataSource:(id)arg2;
+ (id)_closeOtherTabsActionForTab:(id)arg1 inBackgroundTabGroup:(id)arg2 dataSource:(id)arg3;
+ (id)_closeOtherTabsActionForTabDocument:(id)arg1 dataSource:(id)arg2;
+ (id)_copyMenuForTabGroupTab:(id)arg1;
+ (id)_mainMenuForTabDocument:(id)arg1 dataSource:(id)arg2 options:(unsigned long long)arg3;
+ (id)_moveMenuForTabGroupTab:(id)arg1 inTabGroup:(id)arg2 dataSource:(id)arg3;
+ (id)_pinTabActionForTabGroupTab:(id)arg1 inTabGroup:(id)arg2 dataSource:(id)arg3;
+ (id)_presentBookmarksModalActionForTabDocument:(id)arg1;
+ (id)_readerActionForTabDocument:(id)arg1;
+ (id)_shareCommand;
+ (id)_sortMenuForTabDocument:(id)arg1 dataSource:(id)arg2;
+ (id)_sortMenuForTabGroupTab:(id)arg1 dataSource:(id)arg2 inTabGroup:(id)arg3;
+ (id)_stopReloadActionForTabDocument:(id)arg1;
+ (id)_toggleContentBlockersActionForTab:(id)arg1;
+ (id)_toggleVoiceSearchActionForTabDocument:(id)arg1;
+ (id /* block */)actionProviderForTabDocument:(id)arg1 dataSource:(id)arg2 options:(unsigned long long)arg3;
+ (id /* block */)actionProviderForTabGroupTab:(id)arg1 inTabGroup:(id)arg2 dataSource:(id)arg3 options:(unsigned long long)arg4;
+ (id)moveMenuForTabDocument:(id)arg1 dataSource:(id)arg2;
+ (id)moveMenuForTabGroup:(id)arg1 dataSource:(id)arg2;
+ (id)pinTabActionForTabDocument:(id)arg1 dataSource:(id)arg2;

@end
