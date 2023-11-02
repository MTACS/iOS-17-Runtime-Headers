
@interface FKAAvailableCommands : NSObject {
    id  _forceTouchEnabledDidChangeObserverToken;
    NSString * _siriShortcutsDidChangeObserverToken;
    NSMutableDictionary * _tokensToUpdateBlocks;
}

@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, retain) AXSSKeyboardCommandMap *commandMap;
@property (nonatomic, readonly) NSSet *commands;
@property (nonatomic, retain) id forceTouchEnabledDidChangeObserverToken;
@property (nonatomic, retain) NSString *siriShortcutsDidChangeObserverToken;
@property (nonatomic, retain) NSMutableDictionary *tokensToUpdateBlocks;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_siriShortcutCommands;
- (id)categories;
- (id)commandMap;
- (id)commands;
- (void)dealloc;
- (id)forceTouchEnabledDidChangeObserverToken;
- (id)init;
- (id)registerUpdateBlock:(id /* block */)arg1;
- (void)setCommandMap:(id)arg1;
- (void)setForceTouchEnabledDidChangeObserverToken:(id)arg1;
- (void)setSiriShortcutsDidChangeObserverToken:(id)arg1;
- (void)setTokensToUpdateBlocks:(id)arg1;
- (id)siriShortcutsDidChangeObserverToken;
- (id)tokensToUpdateBlocks;
- (void)unregisterUpdateBlockWithToken:(id)arg1;

@end
