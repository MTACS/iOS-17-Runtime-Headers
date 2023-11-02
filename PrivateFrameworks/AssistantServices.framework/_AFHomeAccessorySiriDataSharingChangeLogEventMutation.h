
@interface _AFHomeAccessorySiriDataSharingChangeLogEventMutation : NSObject <AFHomeAccessorySiriDataSharingChangeLogEventMutating> {
    AFHomeAccessorySiriDataSharingChangeLogEvent * _base;
    NSString * _buildVersion;
    NSString * _changeReason;
    long long  _changeSource;
    NSDate * _date;
    NSString * _logEventIdentifier;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasDate : 1; 
        unsigned int hasPreviousOptInStatus : 1; 
        unsigned int hasNewOptInStatus : 1; 
        unsigned int hasChangeSource : 1; 
        unsigned int hasChangeReason : 1; 
        unsigned int hasBuildVersion : 1; 
        unsigned int hasProductVersion : 1; 
        unsigned int hasSchemaVersion : 1; 
        unsigned int hasLogEventIdentifier : 1; 
    }  _mutationFlags;
    long long  _newOptInStatus;
    long long  _previousOptInStatus;
    NSString * _productVersion;
    NSString * _schemaVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getBuildVersion;
- (id)getChangeReason;
- (long long)getChangeSource;
- (id)getDate;
- (id)getLogEventIdentifier;
- (long long)getNewOptInStatus;
- (long long)getPreviousOptInStatus;
- (id)getProductVersion;
- (id)getSchemaVersion;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setBuildVersion:(id)arg1;
- (void)setChangeReason:(id)arg1;
- (void)setChangeSource:(long long)arg1;
- (void)setDate:(id)arg1;
- (void)setLogEventIdentifier:(id)arg1;
- (void)setNewOptInStatus:(long long)arg1;
- (void)setPreviousOptInStatus:(long long)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setSchemaVersion:(id)arg1;

@end
