
@interface HMDAudioAnalysisEventBulletin : NSObject <NSSecureCoding> {
    HMDAccessoryNameComposer * _accessoryNameComposer;
    NSUUID * _accessoryUUID;
    <HMDAudioAnalysisEventSubscriberContext> * _context;
    NSDate * _dateOfOccurrence;
    NSString * _name;
    NSUUID * _notificationUUID;
    NSDictionary * _presence;
    unsigned long long  _reason;
    NSString * _soundIdentifier;
    NSDate * _startDate;
    unsigned long long  _state;
    NSString * _threadIdentifier;
    NSString * _title;
}

@property (nonatomic, retain) HMDAccessoryNameComposer *accessoryNameComposer;
@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly) <HMDAudioAnalysisEventSubscriberContext> *context;
@property (readonly) NSDate *dateOfOccurrence;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSUUID *notificationUUID;
@property (readonly, copy) NSDictionary *presence;
@property (readonly) unsigned long long reason;
@property (readonly, copy) NSString *soundIdentifier;
@property (readonly) NSDate *startDate;
@property (readonly) unsigned long long state;
@property (readonly, copy) NSString *threadIdentifier;
@property (readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryNameComposer;
- (id)accessoryUUID;
- (void)configureAccessoryNameComposer;
- (void)configureWithContext:(id)arg1;
- (id)context;
- (id)dateOfOccurrence;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithReason:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 presence:(id)arg4 notificationUUID:(id)arg5 state:(unsigned long long)arg6 soundIdentifier:(id)arg7 name:(id)arg8 threadIdentifier:(id)arg9 accessoryUUID:(id)arg10 title:(id)arg11;
- (id)localizedKeyForBody;
- (id)localizedKeyForEventEndWithDropIn:(bool)arg1 homeName:(id)arg2;
- (id)localizedKeyForEventStartWithDropIn:(bool)arg1 homeName:(id)arg2;
- (id)localizedKeyForTitle;
- (id)name;
- (id)notificationUUID;
- (id)presence;
- (unsigned long long)reason;
- (id)serialize;
- (void)setAccessoryNameComposer:(id)arg1;
- (void)setNotificationUUID:(id)arg1;
- (id)soundIdentifier;
- (id)startDate;
- (unsigned long long)state;
- (id)stringForAudioAnalysisReasonWithHomeName:(id)arg1;
- (id)threadIdentifier;
- (id)title;

@end
