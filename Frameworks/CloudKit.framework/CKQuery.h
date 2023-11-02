
@interface CKQuery : NSObject <CKRoughlyEquivalent, NSCopying, NSSecureCoding> {
    NSPredicate * _predicate;
    NSString * _recordType;
    NSArray * _sortDescriptors;
}

@property (nonatomic, readonly) CKRoughlyEquivalentProperties *equivalencyProperties;
@property (readonly, copy) NSPredicate *predicate;
@property (readonly, copy) NSString *recordType;
@property (copy) NSArray *sortDescriptors;

+ (id)copySortDescriptor:(id)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_predicateWithoutCopy;
- (void)_setPredicate:(id)arg1;
- (void)_setRecordType:(id)arg1;
- (id)_sortDescriptorsWithoutCopy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)equivalencyProperties;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2;
- (id)predicate;
- (id)recordType;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;

@end
