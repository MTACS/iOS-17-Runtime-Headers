
@interface PGSurveyQuestionFactory : NSObject <PGQuestionFactory> {
    CLSCurationSession * _curationSession;
    NSDictionary * _existingQuestionsByEntityIdentifier;
    bool  _ignoreExistingQuestions;
    short  _questionVersion;
    PGManagerWorkingContext * _workingContext;
}

@property (nonatomic, readonly) NSArray *collidingQuestionTypes;
@property (nonatomic, retain) CLSCurationSession *curationSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *existingQuestionsByEntityIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreExistingQuestions;
@property (nonatomic, readonly) long long questionOptions;
@property (nonatomic, readonly) unsigned short questionType;
@property (nonatomic, readonly) short questionVersion;
@property (readonly) Class superclass;
@property (readonly) PGManagerWorkingContext *workingContext;

- (void).cxx_destruct;
- (id)_assetFromAssets:(id)arg1 closestToLocationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 radius:(double)arg3;
- (id)_questionsByEntityIdentifierFromQuestions:(id)arg1;
- (id)assetFromMomentNode:(id)arg1 closestToLocationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 radius:(double)arg3 curationContext:(id)arg4;
- (id)assetsFromMomentNode:(id)arg1 curationContext:(id)arg2;
- (id)collidingQuestionTypes;
- (id)curatedAssetsFromMomentNode:(id)arg1 curationContext:(id)arg2;
- (id)curationSession;
- (id)existingQuestionsByEntityIdentifier;
- (id)existingQuestionsForEntityIdentifier:(id)arg1;
- (id)fetchExistingQuestions;
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(id /* block */)arg2;
- (bool)ignoreExistingQuestions;
- (id)initWithWorkingContext:(id)arg1 questionVersion:(short)arg2;
- (bool)questionAlreadyExists:(id)arg1;
- (long long)questionOptions;
- (unsigned short)questionType;
- (short)questionVersion;
- (id)representativeAssetsFromMomentNode:(id)arg1 curationContext:(id)arg2;
- (void)setCurationSession:(id)arg1;
- (void)setExistingQuestionsByEntityIdentifier:(id)arg1;
- (void)setIgnoreExistingQuestions:(bool)arg1;
- (bool)shouldAddQuestion:(id)arg1 toAlreadyGeneratedQuestions:(id)arg2;
- (id)workingContext;

@end
