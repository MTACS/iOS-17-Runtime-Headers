
@interface PGSurveyQuestion : NSObject <PGQuestion> {
    NSDictionary * additionalInfo;
    NSString * entityIdentifier;
    double  localFactoryScore;
    double  score;
    unsigned short  state;
}

@property (nonatomic, readonly, copy) NSDictionary *additionalInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned short displayType;
@property (nonatomic, readonly, copy) NSString *entityIdentifier;
@property (nonatomic, readonly) unsigned short entityType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double localFactoryScore;
@property (nonatomic) double score;
@property (nonatomic, readonly) unsigned short state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned short type;

- (void).cxx_destruct;
- (id)_additionalInfoWithAnswerReasonRemovedForQuestionType:(unsigned short)arg1 additionalInfo:(id)arg2;
- (bool)_additionalInfosAreEqualForOtherQuestionAdditionalInfo:(id)arg1;
- (id)additionalInfo;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToPersistedQuestion:(id)arg1;
- (bool)isEquivalentToQuestion:(id)arg1;
- (double)localFactoryScore;
- (void)persistWithCreationDate:(id)arg1 questionVersion:(short)arg2;
- (void)remove;
- (double)score;
- (void)setScore:(double)arg1;
- (unsigned short)state;
- (unsigned short)type;

@end
