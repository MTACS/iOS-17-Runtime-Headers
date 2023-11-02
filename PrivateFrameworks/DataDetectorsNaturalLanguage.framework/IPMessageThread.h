
@interface IPMessageThread : NSObject {
    NSMutableArray * _allUnits;
    NSArray * _allUnitsSorted;
    NSMutableArray * _threadRoots;
}

- (void).cxx_destruct;
- (void)appendUnit:(id)arg1 inResponseToUnit:(id)arg2;
- (id)orderedMessageUnits;
- (id)threads;

@end
