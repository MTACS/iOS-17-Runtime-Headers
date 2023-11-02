
@interface DocumentUnderstanding.DUStructuredEntityResponse : NSObject <NSCoding, NSCopying> {
    void responseDebugInfo;
    void structuredEntities;
}

@property (nonatomic, retain) _TtC21DocumentUnderstanding11DUDebugInfo *responseDebugInfo;
@property (nonatomic, copy) NSArray *structuredEntities;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)responseDebugInfo;
- (void)setResponseDebugInfo:(id)arg1;
- (void)setStructuredEntities:(id)arg1;
- (id)structuredEntities;

@end
