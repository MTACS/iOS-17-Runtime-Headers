
@interface CKDFetchRecordZonePCSDiagnosticsOperation : CKDDatabaseOperation {
    NSString * _identityStatus;
    NSDictionary * _invalidPCSByZoneID;
    CKPCSDiagnosticInformation * _pcsDiagnosticInfo;
    NSArray * _recordZoneIDs;
    NSDictionary * _validPCSByZoneID;
}

@property (nonatomic, retain) NSString *identityStatus;
@property (nonatomic, retain) NSDictionary *invalidPCSByZoneID;
@property (nonatomic, retain) CKPCSDiagnosticInformation *pcsDiagnosticInfo;
@property (nonatomic, retain) NSArray *recordZoneIDs;
@property (nonatomic, retain) NSDictionary *validPCSByZoneID;

- (void).cxx_destruct;
- (void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3;
- (id)activityCreate;
- (id)identityStatus;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (id)invalidPCSByZoneID;
- (void)main;
- (int)operationType;
- (id)pcsDiagnosticInfo;
- (id)recordZoneIDs;
- (id)relevantZoneIDs;
- (void)setIdentityStatus:(id)arg1;
- (void)setInvalidPCSByZoneID:(id)arg1;
- (void)setPcsDiagnosticInfo:(id)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setValidPCSByZoneID:(id)arg1;
- (id)validPCSByZoneID;

@end
