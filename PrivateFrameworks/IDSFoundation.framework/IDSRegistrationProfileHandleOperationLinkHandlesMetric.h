
@interface IDSRegistrationProfileHandleOperationLinkHandlesMetric : NSObject <CUTCoreAnalyticsMetric> {
    NSNumber * _POSIXError;
    NSNumber * _URLError;
    unsigned int  _connectionType;
    NSNumber * _genericError;
    NSString * _guid;
    unsigned int  _registrationError;
    unsigned int  _resultCode;
    bool  _success;
    unsigned int  _vettingStatus;
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
@property (readonly) NSString *name;
@property (nonatomic, readonly) unsigned int registrationError;
@property (nonatomic, readonly) unsigned int resultCode;
@property (nonatomic, readonly) bool success;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int vettingStatus;

- (void).cxx_destruct;
- (id)POSIXError;
- (id)URLError;
- (unsigned int)connectionType;
- (id)dictionaryRepresentation;
- (id)genericError;
- (id)guid;
- (id)initWithGuid:(id)arg1 success:(bool)arg2 connectionType:(unsigned int)arg3 resultCode:(unsigned int)arg4 registrationError:(unsigned int)arg5 vettingStatus:(unsigned int)arg6 genericError:(id)arg7 URLError:(id)arg8 POSIXError:(id)arg9;
- (id)name;
- (unsigned int)registrationError;
- (unsigned int)resultCode;
- (bool)success;
- (unsigned int)vettingStatus;

@end
