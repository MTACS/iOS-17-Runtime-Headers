
@interface ANAccountNotification : NSObject <ANCachedDictionaryRepresentationProtocol, NSSecureCoding> {
    NSString * _accountTypeID;
    ANNotificationAction * _activateAction;
    NSString * _activateButtonTitle;
    NSString * _callbackMachService;
    NSDate * _date;
    long long  _destinations;
    ANNotificationAction * _dismissAction;
    NSString * _eventIdentifier;
    NSString * _identifier;
    NSString * _message;
    long long  _sectionSubtype;
    NSString * _title;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSString *accountTypeID;
@property (nonatomic, retain) ANNotificationAction *activateAction;
@property (nonatomic, copy) NSString *activateButtonTitle;
@property (nonatomic, copy) NSString *callbackMachService;
@property (nonatomic, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long destinations;
@property (nonatomic, retain) ANNotificationAction *dismissAction;
@property (nonatomic, copy) NSString *eventIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) long long sectionSubtype;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountTypeID;
- (id)activateAction;
- (id)activateButtonTitle;
- (id)callbackMachService;
- (id)date;
- (id)description;
- (long long)destinations;
- (id)dictionaryRepresentation;
- (id)dismissAction;
- (void)encodeWithCoder:(id)arg1;
- (id)eventIdentifier;
- (id)identifier;
- (id)initForAccountWithType:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithManagedObject:(id)arg1;
- (id)message;
- (long long)sectionSubtype;
- (void)setActivateAction:(id)arg1;
- (void)setActivateButtonTitle:(id)arg1;
- (void)setCallbackMachService:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDestinations:(long long)arg1;
- (void)setDismissAction:(id)arg1;
- (void)setEventIdentifier:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setSectionSubtype:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)title;
- (id)userInfo;

@end
