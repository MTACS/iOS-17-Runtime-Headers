
@interface MXDiagnosticServices : NSObject <MXDiagnosticServicesProtocol> {
    MXDateUtil * _dateUtil;
    NSObject<OS_os_log> * _logHandle;
    NSMutableSet * _services;
    <MXSourcePathUtilProtocol> * _sourcePathUtil;
}

@property (retain) MXDateUtil *dateUtil;
@property (retain) NSObject<OS_os_log> *logHandle;
@property (readonly, retain) NSMutableSet *services;
@property (retain) <MXSourcePathUtilProtocol> *sourcePathUtil;

- (void).cxx_destruct;
- (void)_createServicesForClient:(id)arg1;
- (id)_diagnosticPayloadForClient:(id)arg1 andDate:(id)arg2;
- (id)_diagnosticsFromServicesForClient:(id)arg1 dateString:(id)arg2;
- (void)_startServices;
- (void)_stopServices;
- (void)cleanServiceDiagnosticsDirectoriesForClient:(id)arg1;
- (id)dateUtil;
- (id)diagnosticPayloadForClient:(id)arg1 andDate:(id)arg2;
- (id)diagnosticPayloadForClient:(id)arg1 isExtension:(bool)arg2 andMainAppBundleID:(id)arg3 andDate:(id)arg4;
- (id)initWithSourcePathUtil:(id)arg1 andDateUtil:(id)arg2;
- (id)logHandle;
- (id)services;
- (void)setDateUtil:(id)arg1;
- (void)setLogHandle:(id)arg1;
- (void)setSourcePathUtil:(id)arg1;
- (id)sourcePathUtil;

@end
