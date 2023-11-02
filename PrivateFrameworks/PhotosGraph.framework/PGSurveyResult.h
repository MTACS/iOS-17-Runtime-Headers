
@interface PGSurveyResult : NSObject <PGQuestion> {
    NSDictionary * additionalInfo;
    NSDate * creationDate;
    unsigned short  displayType;
    NSString * entityIdentifier;
    unsigned short  entityType;
    double  localFactoryScore;
    NSString * momentIdentifier;
    short  questionVersion;
    double  score;
    unsigned short  state;
    unsigned short  type;
}

@property (nonatomic, copy) NSDictionary *additionalInfo;
@property (nonatomic, retain) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short displayType;
@property (nonatomic, copy) NSString *entityIdentifier;
@property (nonatomic) unsigned short entityType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double localFactoryScore;
@property (nonatomic, copy) NSString *momentIdentifier;
@property (nonatomic) short questionVersion;
@property (nonatomic) double score;
@property (nonatomic) unsigned short state;
@property (readonly) Class superclass;
@property (nonatomic) unsigned short type;

- (void).cxx_destruct;
- (id)additionalInfo;
- (id)creationDate;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToPersistedQuestion:(id)arg1;
- (bool)isEquivalentToSurveyResult:(id)arg1;
- (double)localFactoryScore;
- (id)momentIdentifier;
- (void)persistWithCreationDate:(id)arg1 questionVersion:(short)arg2;
- (short)questionVersion;
- (void)remove;
- (double)score;
- (void)setAdditionalInfo:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDisplayType:(unsigned short)arg1;
- (void)setEntityIdentifier:(id)arg1;
- (void)setEntityType:(unsigned short)arg1;
- (void)setMomentIdentifier:(id)arg1;
- (void)setQuestionVersion:(short)arg1;
- (void)setScore:(double)arg1;
- (void)setState:(unsigned short)arg1;
- (void)setType:(unsigned short)arg1;
- (unsigned short)state;
- (unsigned short)type;

@end
