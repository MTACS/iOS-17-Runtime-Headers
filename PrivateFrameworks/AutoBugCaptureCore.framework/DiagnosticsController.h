
@interface DiagnosticsController : NSObject {
    NSMutableDictionary * _actionsDict;
    NSNumber * _autoBugCaptureGID;
    NSString * _autoBugCapturePath;
    NSNumber * _autoBugCaptureUID;
    NSMutableDictionary * _settingsDict;
    DiagnosticExtensionController * deCollector;
}

@property (nonatomic, retain) NSMutableDictionary *actionsDict;
@property (nonatomic, retain) NSNumber *autoBugCaptureGID;
@property (nonatomic, retain) NSString *autoBugCapturePath;
@property (nonatomic, retain) NSNumber *autoBugCaptureUID;
@property (nonatomic, retain) NSMutableDictionary *settingsDict;

+ (void)initialize;
+ (id)loggingStateCache;

- (void).cxx_destruct;
- (bool)_loadLoggingSupport;
- (id)actionsDict;
- (id)actionsDictionaryForProcess:(id)arg1 logLevel:(id)arg2 diagnosticExtensions:(id)arg3;
- (void)applyLogLevel:(id)arg1 forIdentifier:(id)arg2 logSettingType:(unsigned long long)arg3;
- (void)applyLogLevelSets:(id)arg1;
- (id)autoBugCaptureGID;
- (id)autoBugCapturePath;
- (id)autoBugCaptureUID;
- (unsigned long long)collectDiagnosticExtensionFilesForDiagnosticCase:(id)arg1 parameters:(id)arg2 options:(id)arg3 queue:(id)arg4 reply:(id /* block */)arg5;
- (void)configureWithDiagnosticActions:(id)arg1;
- (void)consolidateLoggingLevelsIntoSet:(id)arg1 withCurrentState:(id)arg2;
- (id)consolidatedLogLevelSetsFromActions:(id)arg1;
- (void)dealloc;
- (id)defaultsDictionaryWithAlwaysRunActions:(id)arg1;
- (id)diagActionsForSignature:(id)arg1;
- (id)diagActionsForSignature:(id)arg1 commonActions:(id)arg2;
- (id)diagExtensionCollector;
- (id)diagnosticExtensionsForDiagnosticCase:(id)arg1 enableCommonActions:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (void)lowerLoggingForDiagnosticCase:(id)arg1;
- (void)lowerLoggingForIdentifier:(id)arg1;
- (void)raiseLoggingForActions:(id)arg1 identifier:(id)arg2;
- (void)raiseLoggingForDiagnosticCase:(id)arg1;
- (void)setActionsDict:(id)arg1;
- (void)setAutoBugCaptureGID:(id)arg1;
- (void)setAutoBugCapturePath:(id)arg1;
- (void)setAutoBugCaptureUID:(id)arg1;
- (void)setSettingsDict:(id)arg1;
- (id)settingsDict;
- (bool)validateActionsDictionary:(id)arg1;
- (bool)validateActionsDictionaryContent:(id)arg1 identifier:(id)arg2;
- (bool)validateDiagnosticsConfiguration:(id)arg1;
- (bool)validateOSLogPreferencesProtocol:(id)arg1;
- (bool)validateSettingsDictionary:(id)arg1;
- (bool)validateSettingsNodeContents:(id)arg1 identifier:(id)arg2;
- (bool)validateSettingsNodeDictionary:(id)arg1 identifier:(id)arg2 isDefault:(bool)arg3;

@end
