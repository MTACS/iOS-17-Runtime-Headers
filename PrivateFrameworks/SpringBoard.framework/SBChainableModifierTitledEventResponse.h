
@interface SBChainableModifierTitledEventResponse : SBChainableModifierEventResponse {
    NSString * _title;
}

@property (nonatomic, readonly) NSString *title;

+ (id)responseWithTitle:(id)arg1;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)title;

@end
