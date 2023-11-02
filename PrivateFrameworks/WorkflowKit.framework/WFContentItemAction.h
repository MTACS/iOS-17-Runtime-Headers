
@interface WFContentItemAction : WFAction {
    WFContentProperty * _defaultProperty;
}

@property (nonatomic, readonly) WFContentProperty *defaultProperty;

- (void).cxx_destruct;
- (id)defaultProperty;
- (id)description;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (id)inputContentClasses;
- (bool)inputsMultipleItems;
- (bool)outputsMultipleItems;

@end
