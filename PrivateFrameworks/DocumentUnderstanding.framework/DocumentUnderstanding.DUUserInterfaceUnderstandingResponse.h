
@interface DocumentUnderstanding.DUUserInterfaceUnderstandingResponse : NSObject <NSCoding, NSCopying> {
    void foundEntities;
    void responseDebugInfo;
}

@property (nonatomic, copy) NSArray *foundEntities;
@property (nonatomic, retain) _TtC21DocumentUnderstanding11DUDebugInfo *responseDebugInfo;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)foundEntities;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)responseDebugInfo;
- (void)setFoundEntities:(id)arg1;
- (void)setResponseDebugInfo:(id)arg1;

@end
