
@interface SBBlockSystemAction : SBSystemAction {
    id /* block */  _actionBlock;
    NSString * _name;
}

- (void).cxx_destruct;
- (id)analyticsIdentifier;
- (void)appendDescriptionToFormatter:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)newExecutor;

@end
