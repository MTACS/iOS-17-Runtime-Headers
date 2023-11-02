
@interface SCNNodeReference : SCNReferenceNode {
    NSString * referenceNodeName;
    NSString * referenceSceneName;
}

@property (nonatomic, copy) NSString *referenceNodeName;
@property (nonatomic, copy) NSString *referenceSceneName;

- (void)_reloadWithScene:(id)arg1;
- (void)dealloc;
- (id)referenceNodeName;
- (id)referenceSceneName;
- (void)setReferenceNodeName:(id)arg1;
- (void)setReferenceSceneName:(id)arg1;

@end
