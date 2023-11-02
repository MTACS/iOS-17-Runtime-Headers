
@interface XRXMLProblemReportingContext : NSObject {
    NSFileHandle * _errorFile;
    NSObject<OS_os_log> * _log;
    bool  _passed;
    NSURL * _urlBeingParsed;
}

@property (nonatomic, retain) NSFileHandle *errorFile;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic) bool passed;
@property (nonatomic, copy) NSURL *urlBeingParsed;

- (void).cxx_destruct;
- (id)errorFile;
- (id)init;
- (id)log;
- (bool)passed;
- (void)reportProblemWithElement:(id)arg1 failure:(id)arg2;
- (void)reportWarningWithElement:(id)arg1 failure:(id)arg2;
- (void)setErrorFile:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setPassed:(bool)arg1;
- (void)setUrlBeingParsed:(id)arg1;
- (id)urlBeingParsed;

@end
