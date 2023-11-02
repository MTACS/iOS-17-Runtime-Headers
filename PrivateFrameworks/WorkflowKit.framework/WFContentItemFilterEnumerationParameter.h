
@interface WFContentItemFilterEnumerationParameter : WFEnumerationParameter {
    Class  _contentItemClass;
}

@property (nonatomic, retain) Class contentItemClass;

- (void).cxx_destruct;
- (Class)contentItemClass;
- (id)localizedLabelForPossibleState:(id)arg1;
- (void)setContentItemClass:(Class)arg1;

@end
