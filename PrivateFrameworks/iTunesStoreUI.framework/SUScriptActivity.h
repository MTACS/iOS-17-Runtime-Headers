
@interface SUScriptActivity : SUScriptObject {
    SUScriptFunction * _actionFunction;
}

@property (retain) WebScriptObject *actionFunction;
@property (readonly) NSString *activityImageNameGiftAppStore;
@property (readonly) NSString *activityImageNameGiftMusicStore;
@property (readonly) NSString *activityImageNamePingAppStore;
@property (readonly) NSString *activityImageNamePingMusicStore;
@property (readonly) NSString *activityImageNameWishlistAppStore;
@property (readonly) NSString *activityImageNameWishlistMusicStore;
@property (copy) NSString *activityTitle;
@property (copy) NSString *activityType;
@property (nonatomic, readonly) SUActivity *nativeActivity;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)_nativeActivity;
- (void)_performActionFunctionWithItems:(id)arg1;
- (id)actionFunction;
- (id)activityImageNameGiftAppStore;
- (id)activityImageNameGiftMusicStore;
- (id)activityImageNamePingAppStore;
- (id)activityImageNamePingMusicStore;
- (id)activityImageNameWishlistAppStore;
- (id)activityImageNameWishlistMusicStore;
- (id)activityTitle;
- (id)activityType;
- (id)attributeKeys;
- (void)dealloc;
- (id)nativeActivity;
- (id)scriptAttributeKeys;
- (void)setActionFunction:(id)arg1;
- (void)setActivityImageWithName:(id)arg1;
- (void)setActivityImageWithURL:(id)arg1 scale:(id)arg2;
- (void)setActivityTitle:(id)arg1;
- (void)setActivityType:(id)arg1;

@end
