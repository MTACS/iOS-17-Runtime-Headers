
@interface FMFCore.FMFGenericResponseHandler : NSObject <FMFSessionDelegate> {
    void dataManager;
    void delegate;
    void fences;
    void fmfSession;
    void identifier;
    void isSnapshotMode;
    void locationAlertsOnFriendsByFriends;
    void locationAlertsOnFriendsByMe;
    void locationAlertsOnMeByFriends;
    void locationAlertsOnMeByMe;
    void locationShifter;
    void secureLocationsManager;
    void updateQueue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didUpdateFences:(id)arg1;
- (id)init;

@end
