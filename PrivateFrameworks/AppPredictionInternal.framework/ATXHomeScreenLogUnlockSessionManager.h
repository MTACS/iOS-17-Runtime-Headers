
@interface ATXHomeScreenLogUnlockSessionManager : NSObject <NSSecureCoding> {
    NSMutableArray * _completedSessions;
    ATXScreenLogUnlockSession * _currentSession;
    bool  _isInSession;
}

@property (nonatomic, retain) NSMutableArray *completedSessions;
@property (nonatomic, retain) ATXScreenLogUnlockSession *currentSession;
@property (nonatomic) bool isInSession;

+ (id)_currentSettings;
+ (id)currentSettings;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_eventStatusWithUIEvent:(id)arg1;
- (void)_updateCurrentSessionWithUIEvent:(id)arg1 eventStatus:(long long)arg2;
- (id)completedSessions;
- (id)currentSession;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsInSession:(bool)arg1 currentSession:(id)arg2 completedSessions:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXHomeScreenLogUnlockSessionManager:(id)arg1;
- (bool)isInSession;
- (id)removeCompletedSessions;
- (void)setCompletedSessions:(id)arg1;
- (void)setCurrentSession:(id)arg1;
- (void)setIsInSession:(bool)arg1;
- (id)summarizeCompletedSessions;
- (long long)updateSessionStateWithUIEvent:(id)arg1;

@end
