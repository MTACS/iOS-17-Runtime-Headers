
@interface DocumentUnderstanding.DULanguageTaggingResponse : NSObject <NSCoding, NSCopying> {
    void languageTags;
    void responseDebugInfo;
}

@property (nonatomic, copy) NSArray *languageTags;
@property (nonatomic, retain) _TtC21DocumentUnderstanding11DUDebugInfo *responseDebugInfo;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)languageTags;
- (id)responseDebugInfo;
- (void)setLanguageTags:(id)arg1;
- (void)setResponseDebugInfo:(id)arg1;

@end
