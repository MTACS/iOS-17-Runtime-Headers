
@interface GEODataURLSessionList : NSObject {
    NSMutableArray * _lastUsedDates;
    NSMapTable * _pendingInvalidationGroups;
    NSMutableArray * _urlSessions;
}

@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)addSession:(id)arg1;
- (unsigned long long)count;
- (void)finishTasksAndInvalidateSessionsMatching:(id /* block */)arg1 group:(id)arg2;
- (id)init;
- (void)pruneSessionsNotInIdentifierArray:(id)arg1 agressive:(bool)arg2;
- (id)urlSessionForIdentifier:(id)arg1;
- (id)urlSessionForRequest:(id)arg1;

@end
