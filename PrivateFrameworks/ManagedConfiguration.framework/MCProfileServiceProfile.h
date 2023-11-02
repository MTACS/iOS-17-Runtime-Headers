
@interface MCProfileServiceProfile : MCProfile {
    NSString * _URLString;
    NSArray * _bogusPayloads;
    id  _challenge;
    bool  _confirmInstallation;
    NSArray * _deviceAttributes;
    NSData * _enrollmentIdentityPersistentID;
    bool  _supportedServerVersion;
}

@property (nonatomic, retain) NSString *URLString;
@property (nonatomic, readonly, retain) id challenge;
@property (nonatomic, readonly) bool confirmInstallation;
@property (nonatomic, readonly, retain) NSArray *deviceAttributes;
@property (nonatomic, retain) NSData *enrollmentIdentityPersistentID;
@property (nonatomic, readonly) bool supportedServerVersion;

- (void).cxx_destruct;
- (id)URLString;
- (id)_badDataTypeErrorWithFieldName:(id)arg1;
- (id)_unsupportedValueErrorWithFieldName:(id)arg1 value:(id)arg2;
- (id)challenge;
- (bool)confirmInstallation;
- (id)description;
- (id)deviceAttributes;
- (id)enrollmentIdentityPersistentID;
- (id)initWithDictionary:(id)arg1 signerCerts:(id)arg2 allowEmptyPayload:(bool)arg3 outError:(id*)arg4;
- (id)localizedManagedPayloadSummaryByType;
- (id)localizedPayloadSummaryByType;
- (id)managedPayloads;
- (id)payloads;
- (id)serializedDictionary;
- (void)setEnrollmentIdentityPersistentID:(id)arg1;
- (void)setURLString:(id)arg1;
- (id)stubDictionary;
- (bool)supportedServerVersion;
- (id)verboseDescription;

@end
