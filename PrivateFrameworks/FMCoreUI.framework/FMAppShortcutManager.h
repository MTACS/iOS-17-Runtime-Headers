
@interface FMAppShortcutManager : NSObject

@property (readonly) bool hasShortcutItems;

+ (id)sharedInstance;

- (void)clearShortcutItems;
- (id)createShortcutForItem:(id)arg1;
- (bool)hasShortcutItems;
- (void)removeShortcutItemWithIentifier:(id)arg1;
- (void)setShortcutItem:(id)arg1;
- (void)setShortcutItems:(id)arg1;

@end
