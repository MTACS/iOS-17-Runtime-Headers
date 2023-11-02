
@interface SBSystemActionPreviewContext : NSObject <SBSystemActionPreviewContextProviding> {
    NSString * _clientIdentifier;
    NSString * _elementIdentifier;
    NSMutableDictionary * _userInfo;
}

@property (nonatomic, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *elementIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSMutableDictionary *userInfo;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)elementIdentifier;
- (void)setClientIdentifier:(id)arg1;
- (void)setElementIdentifier:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)userInfo;

@end
