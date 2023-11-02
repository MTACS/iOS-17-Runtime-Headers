
@interface RemindersUICore.TTRShowAssignedDataModelSource : RemindersUICore.TTRRemindersListDataModelSourceBase {
    void countCompleted;
    void dataViewMonitor;
    void delegate;
    void listFetchManager;
    void showCompletedContextInstance;
    void store;
    void tipKitContextInstance;
}

@end
