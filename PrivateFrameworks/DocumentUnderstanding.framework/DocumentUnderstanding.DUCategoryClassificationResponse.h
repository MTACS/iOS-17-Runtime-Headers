
@interface DocumentUnderstanding.DUCategoryClassificationResponse : NSObject <NSCoding, NSCopying> {
    void categories;
    void responseDebugInfo;
}

@property (nonatomic, copy) NSArray *categories;
@property (nonatomic, retain) _TtC21DocumentUnderstanding11DUDebugInfo *responseDebugInfo;

- (void).cxx_destruct;
- (id)categories;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)responseDebugInfo;
- (void)setCategories:(id)arg1;
- (void)setResponseDebugInfo:(id)arg1;

@end
