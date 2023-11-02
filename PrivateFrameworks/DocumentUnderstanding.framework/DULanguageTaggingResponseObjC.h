
@interface DULanguageTaggingResponseObjC : NSObject {
    _TtC21DocumentUnderstanding25DULanguageTaggingResponse * _underlying;
}

@property (nonatomic, copy) NSArray *languageTags;
@property (nonatomic, copy) DUDebugInfoObjC *responseDebugInfo;

- (void).cxx_destruct;
- (id)init;
- (id)languageTags;
- (id)responseDebugInfo;
- (void)setLanguageTags:(id)arg1;
- (void)setResponseDebugInfo:(id)arg1;

@end
