
@interface HDSQLiteRawCheckConstraint : HDSQLiteCheckConstraint {
    NSString * _rawSQL;
}

+ (id)checkConstraintWithSQL:(id)arg1;

- (void).cxx_destruct;
- (id)SQLCheckConstraint;

@end
