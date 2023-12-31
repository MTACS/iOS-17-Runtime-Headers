
@interface SALocalSearchNamedPeriod : AceObject <SALocalSearchPeriod>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *value;

+ (id)namedPeriod;
+ (id)namedPeriodWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setValue:(id)arg1;
- (id)value;

@end
