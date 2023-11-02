
@interface BRCRTCReporter : NSObject {
    NSArray * _allowedZoneNamePrefixes;
    NSDictionary * _globalPayload;
    FPRTCReportingSessionManager * _reportingManager;
    NSDictionary * _userInfo;
}

- (void).cxx_destruct;
- (void)_init;
- (bool)_shouldRemoveZoneNameWithPayload:(id)arg1;
- (id)init;
- (id)initWithFPRTCReportingSession:(id)arg1;
- (void)postReportWithCategory:(unsigned long long)arg1 type:(unsigned long long)arg2 payload:(id)arg3 error:(id)arg4;

@end
