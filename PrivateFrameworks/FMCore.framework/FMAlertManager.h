
@interface FMAlertManager : NSObject {
    NSMutableDictionary * _activeAlerts;
    NSMutableDictionary * _activeCFNotificationsByCategory;
}

@property (nonatomic, retain) NSMutableDictionary *activeAlerts;
@property (nonatomic, retain) NSMutableDictionary *activeCFNotificationsByCategory;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_xpcTransactionNameFor:(id)arg1;
- (void)activateAlert:(id)arg1;
- (id)activeAlerts;
- (id)activeCFNotificationsByCategory;
- (id)init;
- (id)initSingleton;
- (void)setActiveAlerts:(id)arg1;
- (void)setActiveCFNotificationsByCategory:(id)arg1;

@end
