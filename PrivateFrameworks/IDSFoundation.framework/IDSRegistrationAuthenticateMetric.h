
@interface IDSRegistrationAuthenticateMetric : NSObject <CUTCoreAnalyticsMetric> {
    NSNumber * _POSIXError;
    NSNumber * _URLError;
    unsigned int  _connectionType;
    NSNumber * _genericError;
    NSString * _guid;
    bool  _isDSUser;
    bool  _isPhoneUser;
    unsigned int  _registrationError;
    unsigned int  _resultCode;
    bool  _success;
}

@property (nonatomic, readonly) NSNumber *POSIXError;
@property (nonatomic, readonly) NSNumber *URLError;
@property (nonatomic, readonly) unsigned int connectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSNumber *genericError;
@property (nonatomic, readonly) NSString *guid;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDSUser;
@property (nonatomic, readonly) bool isPhoneUser;
@property (readonly) NSString *name;
@property (nonatomic, readonly) unsigned int registrationError;
@property (nonatomic, readonly) unsigned int resultCode;
@property (nonatomic, readonly) bool success;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)POSIXError;
- (id)URLError;
- (unsigned int)connectionType;
- (id)dictionaryRepresentation;
- (id)genericError;
- (id)guid;
- (id)initWithGuid:(id)arg1 success:(bool)arg2 connectionType:(unsigned int)arg3 resultCode:(unsigned int)arg4 registrationError:(unsigned int)arg5 isPhoneUser:(bool)arg6 isDSUser:(bool)arg7 genericError:(id)arg8 URLError:(id)arg9 POSIXError:(id)arg10;
- (bool)isDSUser;
- (bool)isPhoneUser;
- (id)name;
- (unsigned int)registrationError;
- (unsigned int)resultCode;
- (bool)success;

@end
