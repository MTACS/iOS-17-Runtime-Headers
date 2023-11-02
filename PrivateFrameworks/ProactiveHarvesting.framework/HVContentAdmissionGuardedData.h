
@interface HVContentAdmissionGuardedData : NSObject {
    NSSet * _configurableBundleIdentifierDenyList;
    _PASAsset2 * _configurableBundleIdentifierDenyListAsset;
    NSSet * _learnFromThisAppBundleIdentifierDenylist;
    NSHashTable * _observers;
    bool  _suggestionsShouldShowPastEvents;
}

- (void).cxx_destruct;

@end
