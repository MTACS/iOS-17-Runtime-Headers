
@interface CTConnectionAssistantState : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _backupTargets;
    CTCAConnectionClosedState * _connectionClosedState;
    CTCAConnectionState * _connectionState;
    CTCAConversationState * _conversationState;
    CTCATarget * _currentTarget;
    long long  _internetInterface;
    bool  _isEmergencyVoiceCallCapable;
    NSString * _iso3166Alpha3CountryCode;
    CTCALocationState * _locationState;
    CTCARoadsideConversationState * _roadsideConversationState;
    CTCAServiceIntervals * _serviceIntervals;
    CTCASilenceInterval * _silenceInterval;
    CTStewieState * _stewieState;
    CTCATargetVisibility * _targetVisibility;
    CTCATryOutState * _tryOutState;
    unsigned long long  _version;
}

@property (nonatomic, retain) NSArray *backupTargets;
@property (nonatomic, retain) CTCAConnectionClosedState *connectionClosedState;
@property (nonatomic, retain) CTCAConnectionState *connectionState;
@property (nonatomic, retain) CTCAConversationState *conversationState;
@property (nonatomic, retain) CTCATarget *currentTarget;
@property (nonatomic) long long internetInterface;
@property (nonatomic) bool isEmergencyVoiceCallCapable;
@property (nonatomic, retain) NSString *iso3166Alpha3CountryCode;
@property (nonatomic, retain) CTCALocationState *locationState;
@property (nonatomic, retain) CTCARoadsideConversationState *roadsideConversationState;
@property (nonatomic, retain) CTCAServiceIntervals *serviceIntervals;
@property (nonatomic, retain) CTCASilenceInterval *silenceInterval;
@property (nonatomic, retain) CTStewieState *stewieState;
@property (nonatomic, retain) CTCATargetVisibility *targetVisibility;
@property (nonatomic, retain) CTCATryOutState *tryOutState;
@property (nonatomic) unsigned long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backupTargets;
- (id)connectionClosedState;
- (id)connectionState;
- (id)conversationState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentTarget;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)internetInterface;
- (bool)isEmergencyVoiceCallCapable;
- (id)iso3166Alpha3CountryCode;
- (id)locationState;
- (id)roadsideConversationState;
- (id)serviceIntervals;
- (void)setBackupTargets:(id)arg1;
- (void)setConnectionClosedState:(id)arg1;
- (void)setConnectionState:(id)arg1;
- (void)setConversationState:(id)arg1;
- (void)setCurrentTarget:(id)arg1;
- (void)setInternetInterface:(long long)arg1;
- (void)setIsEmergencyVoiceCallCapable:(bool)arg1;
- (void)setIso3166Alpha3CountryCode:(id)arg1;
- (void)setLocationState:(id)arg1;
- (void)setRoadsideConversationState:(id)arg1;
- (void)setServiceIntervals:(id)arg1;
- (void)setSilenceInterval:(id)arg1;
- (void)setStewieState:(id)arg1;
- (void)setTargetVisibility:(id)arg1;
- (void)setTryOutState:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (id)silenceInterval;
- (id)stewieState;
- (id)targetVisibility;
- (id)tryOutState;
- (unsigned long long)version;

@end
