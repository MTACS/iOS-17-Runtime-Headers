
@interface ATXAnchor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _anchorEventIdentifier;
}

@property (nonatomic, retain) NSString *anchorEventIdentifier;

+ (id)allAnchorClasses;
+ (Class)anchorClassFromAnchorTypeString:(id)arg1;
+ (id)anchorOccurenceDateFromDuetEvent:(id)arg1;
+ (long long)anchorType;
+ (id)anchorTypeStringToClassName:(id)arg1;
+ (id)anchorTypeToAnchorClassName:(long long)arg1;
+ (id)anchorTypeToString:(long long)arg1;
+ (id)candidateQueryStartDateFromDuetEvent:(id)arg1;
+ (id)duetEventsPredicates;
+ (double)durationOfAnchorEvent:(id)arg1;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (bool)isActive;
+ (id)keyPathForContextStore;
+ (id)longDescription;
+ (int)pbAnchorEventTypeFromDuetEvent:(id)arg1;
+ (id)predicateForContextStoreRegistration;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)arg1 enterSelector:(SEL)arg2 exitSelector:(SEL)arg3;
+ (void)registerWithContextStoreForAnchorEntranceWithCallback:(id /* block */)arg1 notificationId:(id)arg2 registrationPersistenceContext:(id)arg3;
+ (void)registerWithContextStoreForAnchorExitWithCallback:(id /* block */)arg1 notificationId:(id)arg2 registrationPersistenceContext:(id)arg3;
+ (id)sampleEvent;
+ (double)secondsOfInfluence;
+ (bool)shouldPredicateOnStartDate;
+ (bool)shouldProcessContextStoreNotification;
+ (bool)shouldProcessContextStoreNotificationForDict;
+ (bool)shouldProcessContextStoreNotificationForNumber;
+ (long long)stringToAnchorType:(id)arg1;
+ (Class)supportedDuetDataProviderClass;
+ (bool)supportsSecureCoding;
+ (void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)arg1;
+ (bool)usesContextStoreForRealTimeNotifications;

- (void).cxx_destruct;
- (id)anchorEventIdentifier;
- (id)anchorTypeString;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAnchorEventIdentifier:(id)arg1;

@end
