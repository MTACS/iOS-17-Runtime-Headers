
@interface NSSQLOrderIntermediate : NSSQLIntermediate {
    NSArray * _sortDescriptors;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithSortDescriptors:(id)arg1 inScope:(id)arg2;

@end
