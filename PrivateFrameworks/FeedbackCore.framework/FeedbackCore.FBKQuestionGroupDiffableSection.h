
@interface FeedbackCore.FBKQuestionGroupDiffableSection : FBKDiffableSection {
    void orderedRowIdentifiers;
    void questionGroup;
    void questionIdentifiers;
}

@property (nonatomic, readonly) FBKQuestionGroup *questionGroup;
@property (nonatomic, readonly) NSArray *rowIdentifiers;
@property (nonatomic, readonly) NSString *sectionIdentifier;

+ (id)identifierForQuestion:(id)arg1 formResponse:(id)arg2 questionIDsInErrorState:(id)arg3;

- (void).cxx_destruct;
- (id)init;
- (id)initWithQuestionGroup:(id)arg1 visibleQuestions:(id)arg2 formResponse:(id)arg3 questionIDsInErrorState:(id)arg4;
- (id)questionGroup;
- (id)questionWithRowIdentifier:(id)arg1;
- (id)rowIdentifiers;
- (id)sectionIdentifier;
- (id)visibleQuestions;

@end
