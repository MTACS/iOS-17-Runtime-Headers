
@interface SeymourClient.AppRecordObserver : NSObject <ASDAppQueryResultsObserver> {
    void bundleIdentifier;
    void onRecordUpdated;
    void query;
}

- (void).cxx_destruct;
- (void)appQuery:(id)arg1 resultsDidChange:(id)arg2;
- (id)init;

@end
