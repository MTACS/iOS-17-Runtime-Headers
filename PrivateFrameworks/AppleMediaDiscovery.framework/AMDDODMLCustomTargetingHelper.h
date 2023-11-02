
@interface AMDDODMLCustomTargetingHelper : NSObject

- (id)callAMDClient:(id)arg1 error:(id*)arg2;
- (id)getDictionaryValueDataType:(id)arg1 error:(id*)arg2;
- (id)getOperationsArray;
- (id)init;
- (id)mainTargetingResolver:(id)arg1 error:(id*)arg2;
- (id)parseData:(id)arg1 withArray:(id)arg2 error:(id*)arg3;
- (id)performOperation:(id)arg1 onArray:(id)arg2 error:(id*)arg3;
- (id)postProc:(id)arg1 withDirections:(id)arg2 error:(id*)arg3;

@end
