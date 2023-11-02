
@interface _EARAlignmentState : NSObject <NSCopying> {
    long long  _numberOfDeletions;
    long long  _numberOfInsertions;
    long long  _numberOfSubstitutions;
    long long  _totalCost;
}

@property (nonatomic) long long numberOfDeletions;
@property (nonatomic) long long numberOfInsertions;
@property (nonatomic) long long numberOfSubstitutions;
@property (nonatomic) long long totalCost;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)incrementCost;
- (void)incrementDeletions;
- (void)incrementInsertions;
- (void)incrementSubstitutions;
- (long long)numberOfDeletions;
- (long long)numberOfInsertions;
- (long long)numberOfSubstitutions;
- (void)setNumberOfDeletions:(long long)arg1;
- (void)setNumberOfInsertions:(long long)arg1;
- (void)setNumberOfSubstitutions:(long long)arg1;
- (void)setTotalCost:(long long)arg1;
- (long long)totalCost;

@end
