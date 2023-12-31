
@interface SAAlarmAceAlarmWrap : SAAlarmObject <SASyncWrap>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *generation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *identifier;
@property (readonly) Class superclass;

+ (id)aceAlarmWrap;
+ (id)aceAlarmWrapWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)generation;
- (id)groupIdentifier;
- (void)setGeneration:(id)arg1;

@end
