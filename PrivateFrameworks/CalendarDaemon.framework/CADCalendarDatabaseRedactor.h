
@interface CADCalendarDatabaseRedactor : NSObject {
    <CADDiagnosticLogContext> * _context;
    NSURL * _path;
}

@property (nonatomic, retain) NSURL *path;

- (void).cxx_destruct;
- (bool)_redactOmatic:(struct sqlite3 { }*)arg1;
- (bool)_specialRedactions:(struct sqlite3 { }*)arg1;
- (id)initWithPath:(id)arg1 context:(id)arg2;
- (id)path;
- (bool)redact;
- (void)setPath:(id)arg1;

@end
