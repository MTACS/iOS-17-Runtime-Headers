
@interface ATXGuardedAppBlacklist : NSObject {
    NSMutableSet * _blacklist;
    int  _nextPrefsChangeHandlerToken;
    NSMutableDictionary * _prefsChangeHandlers;
}

- (void).cxx_destruct;
- (id)init;

@end
