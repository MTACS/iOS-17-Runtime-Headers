
@interface WKFullKeyboardAccessWatcher : NSObject {
    bool  fullKeyboardAccessEnabled;
}

+ (bool)fullKeyboardAccessEnabled;

- (id)init;
- (void)notifyAllProcessPools;
- (void)retrieveKeyboardUIModeFromPreferences:(id)arg1;

@end
