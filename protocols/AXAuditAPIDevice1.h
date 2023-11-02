
@protocol AXAuditAPIDevice1 <DTXAllowedRPC>

@required

- (NSArray *)auditCaseIDsForAuditGroup:(NSNumber *)arg1;
- (NSDictionary *)deviceAccessibilitySettings;
- (NSArray *)deviceAllAuditCaseIDs;
- (NSArray *)deviceAllSupportedAuditTypes;
- (NSNumber *)deviceApiVersion;
- (NSArray *)deviceAuditIssueSupportedKeys;
- (void)deviceBailWithMessage:(NSString *)arg1;
- (void)deviceBeginAuditCaseIDs:(NSArray *)arg1;
- (void)deviceBeginAuditTypes:(NSArray *)arg1;
- (NSArray *)deviceCapabilities;
- (NSDictionary *)deviceCaptureScreenshot;
- (NSNumber *)deviceCurrentState;
- (void)deviceDidGetTargeted;
- (NSDictionary *)deviceElement:(NSDictionary *)arg1 performAction:(NSDictionary *)arg2 withValue:(id)arg3;
- (void)deviceElement:(NSDictionary *)arg1 setValue:(id)arg2 attribute:(NSDictionary *)arg3;
- (NSDictionary *)deviceElement:(NSDictionary *)arg1 valueForAttribute:(NSDictionary *)arg2;
- (NSDictionary *)deviceElement:(NSDictionary *)arg1 valueForParameterizedAttribute:(NSDictionary *)arg2 withObject:(id <NSObject><NSSecureCoding><NSCopying>)arg3;
- (void)deviceEnableHighlight:(NSNumber *)arg1;
- (NSDictionary *)deviceFetchElementAtNormalizedDeviceCoordinate:(NSNumber *)arg1;
- (NSDictionary *)deviceFetchResolvesElementsOnSimulator;
- (NSDictionary *)deviceFetchSpecialElement:(NSNumber *)arg1;
- (void)deviceHighlightIssue:(NSDictionary *)arg1;
- (void)deviceHighlightIssues:(NSArray *)arg1;
- (NSString *)deviceHumanReadableDescriptionForAuditCaseID:(NSString *)arg1;
- (void)deviceInspectorAutodrillIntoElements:(NSNumber *)arg1;
- (NSNumber *)deviceInspectorCanNavWhileMonitoringEvents;
- (void)deviceInspectorEnable:(NSNumber *)arg1;
- (void)deviceInspectorFocusOnElement:(NSDictionary *)arg1;
- (void)deviceInspectorInformCurrentCursorPosition:(NSValue *)arg1;
- (void)deviceInspectorLockOnCurrentElement;
- (void)deviceInspectorMoveWithOptions:(NSDictionary *)arg1;
- (void)deviceInspectorPreviewOnElement:(NSDictionary *)arg1;
- (void)deviceInspectorSetMonitoredEventType:(NSNumber *)arg1;
- (void)deviceInspectorShowIgnoredElements:(NSNumber *)arg1;
- (void)deviceInspectorShowVisuals:(NSNumber *)arg1;
- (NSNumber *)deviceInspectorSupportedEventTypes;
- (NSNumber *)deviceInspectorSupportsAutodrillIntoElements;
- (NSNumber *)deviceInspectorSupportsIgnoredElements;
- (void)devicePerformFinalCleanup;
- (void)deviceResetToDefaultAccessibilitySettings;
- (NSArray *)deviceRunningApplications;
- (void)deviceSetAppMonitoringEnabled:(NSNumber *)arg1;
- (void)deviceSetAuditTargetPid:(NSNumber *)arg1;
- (void)deviceSetAuditUIPid:(NSNumber *)arg1;
- (void)deviceUpdateAccessibilitySetting:(NSDictionary *)arg1 withValue:(NSDictionary *)arg2;

@end
