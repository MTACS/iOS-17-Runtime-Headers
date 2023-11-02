
@interface WFSystemSurfaceWorkflowStatusRegistry : NSObject {
    NSUserDefaults * _shortcutsUserDefaults;
}

@property (nonatomic, readonly) NSUserDefaults *shortcutsUserDefaults;

- (void).cxx_destruct;
- (id)init;
- (bool)setStatus:(unsigned long long)arg1 forSystemSurface:(unsigned long long)arg2;
- (bool)setStatusForServicesWorkflows:(unsigned long long)arg1;
- (bool)setStatusForShareSheetWorkflows:(unsigned long long)arg1;
- (id)shortcutsUserDefaults;
- (unsigned long long)statusForServicesWorkflows;
- (unsigned long long)statusForShareSheetWorkflows;
- (unsigned long long)statusForSystemSurface:(unsigned long long)arg1;

@end
