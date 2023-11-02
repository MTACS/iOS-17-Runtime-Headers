
@interface DocumentUnderstanding.DUResponse : NSObject <NSCoding, NSCopying> {
    void documentCategories;
    void foundInEventResult;
    void languageTags;
    void poem;
    void posTags;
    void responseDebugInfo;
    void structuredEntities;
    void topics;
    void userInterfaceUnderstandingResults;
}

@property (nonatomic, retain) _TtC21DocumentUnderstanding32DUCategoryClassificationResponse *documentCategories;
@property (nonatomic, retain) _TtC21DocumentUnderstanding20DUFoundInEventResult *foundInEventResult;
@property (nonatomic, retain) _TtC21DocumentUnderstanding25DULanguageTaggingResponse *languageTags;
@property (nonatomic, copy) NSArray *poem;
@property (nonatomic, copy) NSArray *posTags;
@property (nonatomic, retain) _TtC21DocumentUnderstanding11DUDebugInfo *responseDebugInfo;
@property (nonatomic, retain) _TtC21DocumentUnderstanding26DUStructuredEntityResponse *structuredEntities;
@property (nonatomic, retain) _TtC21DocumentUnderstanding24DUTopicDetectionResponse *topics;
@property (nonatomic, retain) _TtC21DocumentUnderstanding36DUUserInterfaceUnderstandingResponse *userInterfaceUnderstandingResults;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (id)documentCategories;
- (void)encodeWithCoder:(id)arg1;
- (id)foundInEventResult;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)languageTags;
- (id)poem;
- (id)posTags;
- (id)responseDebugInfo;
- (void)setDocumentCategories:(id)arg1;
- (void)setFoundInEventResult:(id)arg1;
- (void)setLanguageTags:(id)arg1;
- (void)setPoem:(id)arg1;
- (void)setPosTags:(id)arg1;
- (void)setResponseDebugInfo:(id)arg1;
- (void)setStructuredEntities:(id)arg1;
- (void)setTopics:(id)arg1;
- (void)setUserInterfaceUnderstandingResults:(id)arg1;
- (id)structuredEntities;
- (id)topics;
- (id)userInterfaceUnderstandingResults;

@end
