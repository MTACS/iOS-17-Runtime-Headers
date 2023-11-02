
@interface CRKClearSignInHistoryResultObject : CATTaskResultObject {
    unsigned long long  _countOfRemovedRecords;
}

@property (nonatomic) unsigned long long countOfRemovedRecords;

+ (bool)supportsSecureCoding;

- (unsigned long long)countOfRemovedRecords;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCountOfRemovedRecords:(unsigned long long)arg1;

@end
