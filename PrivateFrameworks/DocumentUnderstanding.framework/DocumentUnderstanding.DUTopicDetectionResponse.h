
@interface DocumentUnderstanding.DUTopicDetectionResponse : NSObject <NSCoding, NSCopying> {
    void globalTopics;
    void personalTopics;
    void responseDebugInfo;
}

@property (nonatomic, copy) NSArray *globalTopics;
@property (nonatomic, copy) NSArray *personalTopics;
@property (nonatomic, retain) _TtC21DocumentUnderstanding11DUDebugInfo *responseDebugInfo;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)globalTopics;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)personalTopics;
- (id)responseDebugInfo;
- (void)setGlobalTopics:(id)arg1;
- (void)setPersonalTopics:(id)arg1;
- (void)setResponseDebugInfo:(id)arg1;

@end
