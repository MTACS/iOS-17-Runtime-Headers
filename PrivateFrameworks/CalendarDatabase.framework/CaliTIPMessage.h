
@interface CaliTIPMessage : NSObject {
    NSData * _data;
    ICSDocument * _document;
    ICSEvent * _event;
    NSString * _filename;
    bool  _iMIPImported;
    CalDAVScheduleChangesProperty * _scheduleChanges;
}

@property (nonatomic, readonly) NSArray *allOccurrences;
@property (nonatomic, readonly) ICSCalendar *calendar;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, retain) ICSDocument *document;
@property (nonatomic, retain) ICSEvent *event;
@property (nonatomic, copy) NSString *filename;
@property bool iMIPImported;
@property (nonatomic, readonly) ICSEvent *masterEvent;
@property (nonatomic, readonly) NSArray *occurrences;
@property (nonatomic, retain) CalDAVScheduleChangesProperty *scheduleChanges;

- (void).cxx_destruct;
- (id)allOccurrences;
- (id)calendar;
- (long long)compare:(id)arg1;
- (id)data;
- (id)description;
- (id)document;
- (id)event;
- (id)filename;
- (bool)iMIPImported;
- (id)initWithData:(id)arg1 document:(id)arg2 filename:(id)arg3 scheduleChanges:(id)arg4;
- (id)initWithData:(id)arg1 filename:(id)arg2;
- (id)initWithData:(id)arg1 filename:(id)arg2 scheduleChanges:(id)arg3;
- (id)masterEvent;
- (id)occurrences;
- (id)scheduleChanges;
- (void)setData:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setIMIPImported:(bool)arg1;
- (void)setScheduleChanges:(id)arg1;

@end
