
@interface AAViewingSessionManager : NSObject <AAViewingSessionManagerType> {
    void activeSession;
    void sessions;
}

- (void).cxx_destruct;
- (void)endActiveViewingSession;
- (void)endViewingSessionForContentIdentifier:(id)arg1;
- (id)init;
- (void)removeObject:(id)arg1 forContentIdentifier:(id)arg2;
- (id)viewingSessionForContentIdentifier:(id)arg1 object:(id)arg2 onEnd:(id /* block */)arg3;

@end
