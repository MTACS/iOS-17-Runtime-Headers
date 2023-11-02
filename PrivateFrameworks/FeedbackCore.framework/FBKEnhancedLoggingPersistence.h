
@interface FBKEnhancedLoggingPersistence : NSObject {
    NSString * _searchText;
}

@property (nonatomic, readonly) bool hasLoggingSessions;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) long long loggingSessionCount;
@property (nonatomic, readonly) NSString *searchText;
@property (nonatomic, readonly) NSArray *sessions;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)deleteSession:(id)arg1;
- (void)deleteSessionWithFeedbackID:(id)arg1;
- (id)deserializeSessionData:(id)arg1;
- (bool)hasLoggingSessions;
- (id)init;
- (id)items;
- (long long)loggingSessionCount;
- (id)mutableSessionDictionary;
- (void)saveSession:(id)arg1;
- (void)saveSessionForContentItem:(id)arg1 followup:(id)arg2 filePredicate:(id)arg3 devices:(id)arg4;
- (id)searchText;
- (id)sessions;

@end
