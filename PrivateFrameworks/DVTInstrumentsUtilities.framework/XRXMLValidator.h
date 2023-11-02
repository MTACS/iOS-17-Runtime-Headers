
@interface XRXMLValidator : NSObject {
    NSFileHandle * _diagnosticFile;
    NSFileHandle * _errorFile;
    unsigned long long  _errorLimit;
    NSArray * _errorReplacements;
    unsigned long long  _errorsEmittedCount;
    bool  _limitMessageEmitted;
    NSObject<OS_os_log> * _log;
    NSURL * _schemaURL;
    NSURL * _url;
}

@property (retain) NSFileHandle *diagnosticFile;
@property (retain) NSFileHandle *errorFile;
@property unsigned long long errorLimit;
@property (retain) NSObject<OS_os_log> *log;

- (void).cxx_destruct;
- (id)diagnosticFile;
- (id)errorFile;
- (unsigned long long)errorLimit;
- (id)findErrorMessageForErrorPtr:(struct _xmlError { int x1; int x2; char *x3; int x4; char *x5; int x6; char *x7; char *x8; char *x9; int x10; int x11; void *x12; void *x13; }*)arg1;
- (id)initWithSourceURL:(id)arg1 schemaURL:(id)arg2;
- (id)log;
- (void)setDiagnosticFile:(id)arg1;
- (void)setErrorFile:(id)arg1;
- (void)setErrorLimit:(unsigned long long)arg1;
- (void)setLog:(id)arg1;
- (bool)validate;

@end
