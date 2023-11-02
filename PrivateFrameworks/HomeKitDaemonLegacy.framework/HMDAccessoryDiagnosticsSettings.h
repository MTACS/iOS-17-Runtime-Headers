
@interface HMDAccessoryDiagnosticsSettings : NSObject {
    HAPSupportedDiagnosticsSnapshot * _currentSnapshot;
    HMDService * _diagnosticsService;
    NSString * _transport;
}

@property (retain) HAPSupportedDiagnosticsSnapshot *currentSnapshot;
@property (readonly) HMDService *diagnosticsService;
@property (readonly) NSString *transport;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)currentSnapshot;
- (id)diagnosticsService;
- (id)initWithService:(id)arg1;
- (void)setCurrentSnapshot:(id)arg1;
- (id)transport;

@end
