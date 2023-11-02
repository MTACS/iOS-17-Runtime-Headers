
@interface TIEventDescriptorParser : TIDescriptorParser

- (id)init;
- (id)parseBooleanFieldSpecWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3;
- (void)parseEventDescriptor:(id*)arg1 andEventSpec:(id*)arg2 withName:(id)arg3 fromConfig:(id)arg4 errors:(id)arg5;
- (void)parseEventDescriptors:(id)arg1 andEventSpecs:(id)arg2 fromConfig:(id)arg3 errors:(id)arg4;
- (void)parseFieldDescriptor:(id*)arg1 andFieldSpec:(id*)arg2 withName:(id)arg3 fromConfig:(id)arg4 errors:(id)arg5;
- (id)parseFloatFieldSpecWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3;
- (id)parseIntegerFieldSpecWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3;
- (id)parseStringFieldSpecWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3;

@end
