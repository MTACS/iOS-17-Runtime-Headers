
@interface CRLineWrapperV1 : NSObject <CRLineWrapping>

- (id)_allLinesFromInput:(id)arg1 blockMapping:(id*)arg2;
- (bool)_shouldInsertLineBreakForResult:(id)arg1 configuration:(id)arg2 context:(id)arg3;
- (void)computeLineWrappingForInput:(id)arg1;
- (unsigned long long)lineWrappingTypeForResult:(id)arg1 configuration:(id)arg2 strictConfiguration:(id)arg3 context:(id)arg4;

@end
