
@interface FCCKPRequestOperationHeader : PBCodable <NSCopying> {
    NSString * _applicationBundle;
    unsigned long long  _applicationConfigVersion;
    NSString * _applicationContainer;
    int  _applicationContainerEnvironment;
    NSString * _applicationVersion;
    NSData * _clientChangeToken;
    NSString * _deviceAssignedName;
    unsigned long long  _deviceFlowControlBudget;
    unsigned long long  _deviceFlowControlBudgetCap;
    NSString * _deviceFlowControlKey;
    float  _deviceFlowControlRegeneration;
    NSString * _deviceHardwareID;
    NSString * _deviceHardwareVersion;
    FCCKPIdentifier * _deviceIdentifier;
    NSString * _deviceLibraryName;
    NSString * _deviceLibraryVersion;
    unsigned long long  _deviceProtocolVersion;
    bool  _deviceSoftwareIsAppleInternal;
    NSString * _deviceSoftwareVersion;
    unsigned long long  _globalConfigVersion;
    struct { 
        unsigned int applicationConfigVersion : 1; 
        unsigned int deviceFlowControlBudget : 1; 
        unsigned int deviceFlowControlBudgetCap : 1; 
        unsigned int deviceProtocolVersion : 1; 
        unsigned int globalConfigVersion : 1; 
        unsigned int operationGroupQuantity : 1; 
        unsigned int applicationContainerEnvironment : 1; 
        unsigned int deviceFlowControlRegeneration : 1; 
        unsigned int isolationLevel : 1; 
        unsigned int targetDatabase : 1; 
        unsigned int deviceSoftwareIsAppleInternal : 1; 
    }  _has;
    int  _isolationLevel;
    FCCKPLocale * _locale;
    NSString * _mmcsProtocolVersion;
    NSString * _operationGroupName;
    unsigned long long  _operationGroupQuantity;
    int  _targetDatabase;
    NSString * _userIDContainerID;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
