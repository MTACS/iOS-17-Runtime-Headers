
@interface POXSChoiceDefinition : POXSDefinition {
    NSMapTable * _elements;
}

@property (nonatomic, readonly, copy) NSArray *elements;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)elementForValue:(id)arg1;
- (id)elements;
- (id)init;
- (void)setName:(id)arg1 namespaceURI:(id)arg2 forType:(Class)arg3;

@end
