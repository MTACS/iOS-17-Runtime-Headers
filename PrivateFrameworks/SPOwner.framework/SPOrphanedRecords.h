
@interface SPOrphanedRecords : NSObject <NSCopying, NSSecureCoding> {
    NSString * _recordType;
    NSArray * _records;
}

@property (nonatomic, copy) NSString *recordType;
@property (nonatomic, copy) NSArray *records;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordType:(id)arg1 records:(id)arg2;
- (id)recordType;
- (id)records;
- (void)setRecordType:(id)arg1;
- (void)setRecords:(id)arg1;

@end
