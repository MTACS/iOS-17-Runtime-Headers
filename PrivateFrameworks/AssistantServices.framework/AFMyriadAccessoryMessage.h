
@interface AFMyriadAccessoryMessage : NSObject {
    NSUUID * _accessoryId;
    unsigned char  _ack;
    unsigned short  _audioHash;
    unsigned char  _deviceClass;
    unsigned char  _deviceGroup;
    unsigned char  _electionDecision;
    unsigned char  _emergencyHandled;
    unsigned char  _goodnessScore;
    bool  _isSane;
    struct myrAccessoryMessage { 
        unsigned char version; 
        unsigned long long requestType; 
        unsigned long long session; 
        double voiceTriggerEndTime; 
        unsigned short audioHash; 
        unsigned char goodnessScore; 
        unsigned char userConfidenceScore; 
        unsigned char tieBreaker; 
        unsigned char deviceClass; 
        unsigned char deviceGroup; 
        unsigned char productType; 
        unsigned char electionDecision; 
        unsigned char emergencyHandled; 
        unsigned char ack; 
    }  _message;
    unsigned char  _productType;
    unsigned long long  _requestType;
    bool  _serializedProtocol;
    unsigned long long  _session;
    unsigned char  _tieBreaker;
    unsigned char  _userConfidenceScore;
    unsigned char  _version;
    double  _voiceTriggerEndTime;
}

@property (nonatomic, readonly) NSUUID *accessoryId;
@property (getter=isAcknowledgement, nonatomic, readonly) unsigned char ack;
@property (nonatomic, readonly) unsigned short audioHash;
@property (nonatomic, readonly) unsigned char deviceClass;
@property (nonatomic, readonly) unsigned char deviceGroup;
@property (getter=electionWon, nonatomic, readonly) unsigned char electionDecision;
@property (getter=isEmergencyHandled, nonatomic, readonly) unsigned char emergencyHandled;
@property (nonatomic, readonly) unsigned char goodnessScore;
@property (nonatomic, readonly) bool isSane;
@property (nonatomic, readonly) unsigned char productType;
@property (nonatomic, readonly) unsigned long long requestType;
@property (getter=usesSerializedProtocol, nonatomic, readonly) bool serializedProtocol;
@property (nonatomic, readonly) unsigned long long session;
@property (nonatomic, readonly) unsigned char tieBreaker;
@property (nonatomic, readonly) unsigned char userConfidenceScore;
@property (nonatomic, readonly) unsigned char version;
@property (nonatomic, readonly) double voiceTriggerEndTime;

+ (id)acknowledgeRequestKey;
+ (id)audioDataKey;
+ (id)deviceInfoKey;
+ (id)electionDecisionKey;
+ (id)emergencyHandledKey;
+ (bool)isMyriadRequestMessage:(id)arg1;
+ (id)messageKey;
+ (id)myriadRequestTypeAsString:(unsigned long long)arg1;
+ (id)protocolName;
+ (id)requestTypeKey;
+ (id)sessionIdKey;

- (void).cxx_destruct;
- (void)_copyRawBytesFromSource:(const void*)arg1 toDest:(void*)arg2 length:(unsigned long long)arg3;
- (void)_initWithMessage:(const struct myrAccessoryMessage { unsigned char x1; unsigned long long x2; unsigned long long x3; double x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; }*)arg1;
- (void)_initializeMessageObj:(id)arg1;
- (void)_initializeMessageObjFromDictionary:(id)arg1;
- (id)accessoryId;
- (unsigned short)audioHash;
- (id)description;
- (unsigned char)deviceClass;
- (unsigned char)deviceGroup;
- (unsigned char)electionWon;
- (unsigned char)goodnessScore;
- (id)initElectionDecisionMessageWithSessionId:(unsigned long long)arg1 decision:(bool)arg2 accessoryId:(id)arg3;
- (id)initPreheatMessageWithSessionId:(unsigned long long)arg1 accessoryId:(id)arg2;
- (id)initResetMessageWithSessionId:(unsigned long long)arg1 accessoryId:(id)arg2;
- (id)initWithAccessoryMessage:(id)arg1 accessoryId:(id)arg2;
- (id)initWithAccessoryMessageAsDictionary:(id)arg1 accessoryId:(id)arg2;
- (id)initWithRequestType:(unsigned long long)arg1 session:(unsigned long long)arg2 voiceTriggerEndTime:(double)arg3 audioHash:(unsigned short)arg4 goodnessScore:(unsigned char)arg5 userConfidenceScore:(unsigned char)arg6 tieBreaker:(unsigned char)arg7 deviceClass:(unsigned char)arg8 deviceGroup:(unsigned char)arg9 productType:(unsigned char)arg10 electionDecision:(unsigned char)arg11 emergencyHandled:(unsigned char)arg12 ack:(unsigned char)arg13 accessoryId:(id)arg14;
- (unsigned char)isAcknowledgement;
- (unsigned char)isEmergencyHandled;
- (bool)isSane;
- (id)messageAsData;
- (unsigned char)productType;
- (unsigned long long)requestType;
- (unsigned long long)session;
- (unsigned char)tieBreaker;
- (unsigned char)userConfidenceScore;
- (bool)usesSerializedProtocol;
- (unsigned char)version;
- (double)voiceTriggerEndTime;

@end
