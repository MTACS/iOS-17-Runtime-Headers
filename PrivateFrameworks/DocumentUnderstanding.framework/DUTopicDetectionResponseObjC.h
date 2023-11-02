
@interface DUTopicDetectionResponseObjC : NSObject {
    _TtC21DocumentUnderstanding24DUTopicDetectionResponse * _underlying;
}

@property (nonatomic, copy) NSArray *globalTopics;
@property (nonatomic, copy) NSArray *personalTopics;
@property (nonatomic, copy) DUDebugInfoObjC *responseDebugInfo;

- (void).cxx_destruct;
- (id)globalTopics;
- (id)init;
- (id)personalTopics;
- (id)responseDebugInfo;
- (void)setGlobalTopics:(id)arg1;
- (void)setPersonalTopics:(id)arg1;
- (void)setResponseDebugInfo:(id)arg1;

@end
