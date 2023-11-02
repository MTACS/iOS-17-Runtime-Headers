
@interface PGMergeCandidateQuestionFactory : NSObject <PGQuestionFactory> {
    PHFetchResult * _persons;
    short  _questionVersion;
    PGManagerWorkingContext * _workingContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHFetchResult *persons;
@property (nonatomic, readonly) long long questionOptions;
@property (nonatomic, readonly) unsigned short questionType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(id /* block */)arg2;
- (id)initWithWorkingContext:(id)arg1 questionVersion:(short)arg2;
- (id)persons;
- (long long)questionOptions;
- (unsigned short)questionType;
- (void)setPersons:(id)arg1;

@end
