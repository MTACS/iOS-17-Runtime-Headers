
@interface ObjCDiagnosticsReporterLaunchOptions : NSObject {
    void files_to_attach;
    void log_path;
    void panic_string;
}

@property (nonatomic, copy) NSArray *files_to_attach;
@property (nonatomic, copy) NSString *log_path;
@property (nonatomic, copy) NSString *panic_string;

- (void).cxx_destruct;
- (id)files_to_attach;
- (id)init;
- (id)log_path;
- (id)panic_string;
- (void)setFiles_to_attach:(id)arg1;
- (void)setLog_path:(id)arg1;
- (void)setPanic_string:(id)arg1;

@end
