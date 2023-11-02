
@interface VCSParseState : NSObject {
    NSMutableArray * _calendars;
    unsigned long long  _context;
    VCSCalendar * _currentCalendar;
    VCSEntity * _currentEntity;
    int  _lineNumber;
    bool  _palmImport;
    unsigned long long  _status;
    long long  _version;
}

@property (nonatomic, retain) NSMutableArray *calendars;
@property (nonatomic) unsigned long long context;
@property (nonatomic, retain) VCSCalendar *currentCalendar;
@property (nonatomic, retain) VCSEntity *currentEntity;
@property (nonatomic) int lineNumber;
@property (nonatomic) bool palmImport;
@property (nonatomic) unsigned long long status;
@property (nonatomic) long long version;

- (void).cxx_destruct;
- (id)calendars;
- (unsigned long long)context;
- (id)currentCalendar;
- (id)currentEntity;
- (id)init;
- (int)lineNumber;
- (bool)palmImport;
- (void)setCalendars:(id)arg1;
- (void)setContext:(unsigned long long)arg1;
- (void)setCurrentCalendar:(id)arg1;
- (void)setCurrentEntity:(id)arg1;
- (void)setLineNumber:(int)arg1;
- (void)setPalmImport:(bool)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setVersion:(long long)arg1;
- (void)setVersionMaj:(int)arg1 andMin:(int)arg2;
- (unsigned long long)status;
- (long long)version;

@end
