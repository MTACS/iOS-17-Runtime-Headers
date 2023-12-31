
@protocol CNVCardParameterLine <CNVCardLine>

@required

- (void)addGroupedLine:(id <CNVCardLine>)arg1 withCounter:(long long*)arg2;
- (void)addParameterWithName:(NSString *)arg1 value:(NSString *)arg2;
- (bool)canSerializeWithStrategy:(id <CNVCardLineSerialization>)arg1;
- (void)insertParameterWithName:(NSString *)arg1 value:(NSString *)arg2 atIndex:(unsigned long long)arg3;
- (void)serializeValueWithStrategy:(id <CNVCardLineSerialization>)arg1;

@end
