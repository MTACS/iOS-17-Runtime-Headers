
@interface CLSHandoutReportItem : CLSReportItem <NSCopying, NSSecureCoding> {
    NSArray * _additionalActivityReports;
    NSString * _attachmentID;
    unsigned long long  _changeHash;
    NSString * _classID;
    bool  _completed;
    NSDate * _endDate;
    int  _granularity;
    NSString * _handoutID;
    CLSActivityReport * _primaryActivityReport;
    NSString * _reportID;
    NSDate * _startDate;
    NSString * _studentID;
    int  _type;
}

@property (nonatomic, copy) NSArray *additionalActivityReports;
@property (nonatomic, copy) NSString *attachmentID;
@property (nonatomic, readonly) unsigned long long changeHash;
@property (nonatomic, copy) NSString *classID;
@property (getter=isCompleted, nonatomic) bool completed;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) int granularity;
@property (nonatomic, copy) NSString *handoutID;
@property (nonatomic, copy) CLSActivityReport *primaryActivityReport;
@property (nonatomic, copy) NSString *reportID;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, copy) NSString *studentID;
@property (nonatomic) int type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)add:(id)arg1;
- (id)additionalActivityReports;
- (id)attachmentID;
- (unsigned long long)changeHash;
- (id)classID;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (int)granularity;
- (id)handoutID;
- (id)initWithCoder:(id)arg1;
- (bool)isCompleted;
- (id)primaryActivityReport;
- (id)reportID;
- (void)scalarMultiply:(double)arg1;
- (void)setAdditionalActivityReports:(id)arg1;
- (void)setAttachmentID:(id)arg1;
- (void)setClassID:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setEndDate:(id)arg1;
- (void)setGranularity:(int)arg1;
- (void)setHandoutID:(id)arg1;
- (void)setPrimaryActivityReport:(id)arg1;
- (void)setReportID:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStudentID:(id)arg1;
- (void)setType:(int)arg1;
- (id)startDate;
- (id)studentID;
- (int)type;

@end
