
@interface CLSArchivedSurvey : CLSObject <CLSRelationable> {
    NSString * _authorID;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, readonly) NSArray *archivedSurveySteps;
@property (nonatomic, readonly, copy) NSString *authorID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long type;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addArchivedSurveyStep:(id)arg1;
- (id)archivedSurveySteps;
- (id)authorID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 authorID:(id)arg2;
- (void)setAuthorID:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(long long)arg1;
- (id)title;
- (long long)type;

@end
