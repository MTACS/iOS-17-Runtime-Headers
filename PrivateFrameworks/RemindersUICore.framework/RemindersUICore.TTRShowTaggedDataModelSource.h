
@interface RemindersUICore.TTRShowTaggedDataModelSource : RemindersUICore.TTRRemindersListDataModelSourceBase {
    void countCompleted;
    void dataModelAdhocRefreshInitiator;
    void dataModelAdhocRefreshSubscription;
    void dataViewMonitor;
    void delegate;
    void hashtagContextInstance;
    void lastSuccessfulFetchHasValidSelection;
    void showCompletedContextInstance;
    void store;
    void tipKitContextInstance;
}

@end
