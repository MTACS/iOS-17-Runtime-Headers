
@interface WFDisplayPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource> {
    NSArray * _displays;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *displays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)displays;
- (id)enumeration:(id)arg1 accessoryIconForPossibleState:(id)arg2;
- (id)enumeration:(id)arg1 accessoryImageForPossibleState:(id)arg2;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)enumeration:(id)arg1 localizedSubtitleLabelForPossibleState:(id)arg2;
- (id)initWithDefinition:(id)arg1;
- (id)possibleStatesForEnumeration:(id)arg1;
- (Class)singleStateClass;

@end
