
@interface DUStructuredEntityResponseObjC : NSObject {
    _TtC21DocumentUnderstanding26DUStructuredEntityResponse * _underlying;
}

@property (nonatomic, copy) DUDebugInfoObjC *responseDebugInfo;
@property (nonatomic, copy) NSArray *structuredEntities;

- (void).cxx_destruct;
- (id)init;
- (id)responseDebugInfo;
- (void)setResponseDebugInfo:(id)arg1;
- (void)setStructuredEntities:(id)arg1;
- (id)structuredEntities;

@end
