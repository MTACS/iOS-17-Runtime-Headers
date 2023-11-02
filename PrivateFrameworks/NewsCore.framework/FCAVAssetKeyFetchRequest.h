
@interface FCAVAssetKeyFetchRequest : NSObject {
    id /* block */  _completionHandler;
    AVContentKeySession * _contentKeySession;
    NSMutableArray * _errorsEncountered;
    bool  _forceRefresh;
    NSMutableSet * _remainingKeyURIs;
}

- (void).cxx_destruct;

@end
