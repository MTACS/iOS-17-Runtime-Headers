
@interface AFMyriadAccessoryMetricMessage : NSObject {
    struct MyriadMetricsDataV1 { 
        unsigned char version; 
        unsigned long long sessionId; 
        unsigned char eventType; 
        unsigned long long requestType; 
        unsigned char state; 
        double advDelay; 
        double advInterval; 
        unsigned char coordinationAllowed; 
        unsigned char winnerGoodnessScore; 
        unsigned char winnerProductType; 
        unsigned char winnerDeviceClass; 
        unsigned char homepodInvolved; 
        unsigned char previousDecision; 
        double previousDecisionTime; 
        unsigned char deviceGroup; 
        unsigned char decision; 
        unsigned char lateToElection; 
        unsigned char electionParticipantGoodnessScore[50]; 
        unsigned char electionParticipantDeviceType[50]; 
        unsigned char electionParticipantProductType[50]; 
        unsigned char electionParticipantCount; 
    }  _metric;
}

@property (nonatomic, readonly) double advDelay;
@property (nonatomic, readonly) double advInterval;
@property (nonatomic, readonly) bool coordinationAllowed;
@property (nonatomic, readonly) bool decision;
@property (nonatomic, readonly) unsigned char deviceGroup;
@property (nonatomic, readonly) unsigned char electionParticipantCount;
@property (nonatomic, readonly) char *electionParticipantDeviceType;
@property (nonatomic, readonly) char *electionParticipantGoodnessScore;
@property (nonatomic, readonly) char *electionParticipantProductType;
@property (nonatomic, readonly) unsigned char eventType;
@property (nonatomic, readonly) bool homepodInvolved;
@property (nonatomic, readonly) bool lateToElection;
@property (nonatomic, readonly) bool previousDecision;
@property (nonatomic, readonly) double previousDecisionTime;
@property (nonatomic, readonly) unsigned long long requestType;
@property (nonatomic, readonly) unsigned long long sessionId;
@property (nonatomic, readonly) unsigned char state;
@property (nonatomic, readonly) unsigned char version;
@property (nonatomic, readonly) unsigned char winnerDeviceClass;
@property (nonatomic, readonly) unsigned char winnerGoodnessScore;
@property (nonatomic, readonly) unsigned char winnerProductType;

- (bool)_decodeMetricDataPayload:(id)arg1 decodedPayload:(struct MyriadMetricsDataV1 { unsigned char x1; unsigned long long x2; unsigned char x3; unsigned long long x4; unsigned char x5; double x6; double x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; double x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18[50]; unsigned char x19[50]; unsigned char x20[50]; unsigned char x21; }*)arg2;
- (id)_extractMetricDataFromDataPayload:(id)arg1;
- (double)advDelay;
- (double)advInterval;
- (bool)coordinationAllowed;
- (bool)decision;
- (unsigned char)deviceGroup;
- (unsigned char)electionParticipantCount;
- (char *)electionParticipantDeviceType;
- (char *)electionParticipantGoodnessScore;
- (char *)electionParticipantProductType;
- (unsigned char)eventType;
- (bool)homepodInvolved;
- (id)initWithDataPayload:(id)arg1;
- (id)initWithMetricData:(id)arg1;
- (bool)lateToElection;
- (id)messageAsData;
- (struct MyriadMetricsDataV1 { unsigned char x1; unsigned long long x2; unsigned char x3; unsigned long long x4; unsigned char x5; double x6; double x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; double x14; unsigned char x15; unsigned char x16; unsigned char x17; unsigned char x18[50]; unsigned char x19[50]; unsigned char x20[50]; unsigned char x21; })messageAsStruct;
- (bool)previousDecision;
- (double)previousDecisionTime;
- (unsigned long long)requestType;
- (unsigned long long)sessionId;
- (unsigned char)state;
- (unsigned char)version;
- (unsigned char)winnerDeviceClass;
- (unsigned char)winnerGoodnessScore;
- (unsigned char)winnerProductType;

@end
