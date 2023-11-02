
@interface DUResponseObjC : NSObject {
    _TtC21DocumentUnderstanding10DUResponse * _underlying;
}

@property (nonatomic, copy) DUCategoryClassificationResponseObjC *documentCategories;
@property (nonatomic, copy) DUFoundInEventResultObjC *foundInEvent;
@property (nonatomic, copy) DULanguageTaggingResponseObjC *languageTags;
@property (nonatomic, copy) DUDebugInfoObjC *responseDebugInfo;
@property (nonatomic, copy) DUStructuredEntityResponseObjC *structuredEntities;
@property (nonatomic, copy) DUTopicDetectionResponseObjC *topics;

- (void).cxx_destruct;
- (id)documentCategories;
- (id)foundInEvent;
- (id)init;
- (id)languageTags;
- (id)responseDebugInfo;
- (void)setDocumentCategories:(id)arg1;
- (void)setFoundInEvent:(id)arg1;
- (void)setLanguageTags:(id)arg1;
- (void)setResponseDebugInfo:(id)arg1;
- (void)setStructuredEntities:(id)arg1;
- (void)setTopics:(id)arg1;
- (id)structuredEntities;
- (id)topics;

@end
