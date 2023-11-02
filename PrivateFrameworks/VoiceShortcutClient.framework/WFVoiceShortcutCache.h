
@interface WFVoiceShortcutCache : NSObject {
    bool  _enabled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _state;
    NSArray * _voiceShortcuts;
    NSMutableArray * _waitingFetchRequests;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, copy) NSArray *voiceShortcuts;
@property (nonatomic, readonly, copy) NSMutableArray *waitingFetchRequests;

- (void).cxx_destruct;
- (void)clear;
- (void)databaseDidChange;
- (void)dealloc;
- (void)getCachedVoiceShortcuts:(id /* block */)arg1;
- (id)init;
- (bool)isEnabled;
- (void)registerForDatabaseNotifications;
- (void)setCachedVoiceShortcuts:(id /* block */)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setVoiceShortcuts:(id)arg1;
- (unsigned long long)state;
- (void)unregisterFromDatabaseNotifications;
- (id)voiceShortcuts;
- (id)waitingFetchRequests;

@end
