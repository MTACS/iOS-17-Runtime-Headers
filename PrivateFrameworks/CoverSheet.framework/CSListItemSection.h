
@interface CSListItemSection : NSObject <BSDescriptionProviding> {
    NSString * _identifier;
    bool  _supportsViewGrouping;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsViewGrouping;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)setSupportsViewGrouping:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)supportsViewGrouping;

@end
