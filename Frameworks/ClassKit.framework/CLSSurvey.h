
@interface CLSSurvey : CLSObject <CLSRelationable> {
    NSString * _authorID;
    NSString * _serverETag;
    NSDate * _studentFirstSubmissionDate;
    long long  _surveyUpdateStatus;
    NSDate * _teacherLastModifiedDate;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *authorID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *surveySteps;
@property (nonatomic, readonly) long long surveyUpdateStatus;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long type;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addSurveyStep:(id)arg1;
- (id)authorID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 authorID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeWithObject:(id)arg1;
- (bool)questionArraysEqual:(id)arg1;
- (void)removeSurveyStep:(id)arg1;
- (id)serverETag;
- (void)setAuthorID:(id)arg1;
- (void)setServerETag:(id)arg1;
- (void)setStudentFirstSubmissionDate:(id)arg1;
- (void)setSurveyUpdateStatus:(long long)arg1;
- (void)setTeacherLastModifiedDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(long long)arg1;
- (id)studentFirstSubmissionDate;
- (id)surveySteps;
- (long long)surveyUpdateStatus;
- (id)teacherLastModifiedDate;
- (id)title;
- (long long)type;
- (bool)validateObject:(id*)arg1;

@end
