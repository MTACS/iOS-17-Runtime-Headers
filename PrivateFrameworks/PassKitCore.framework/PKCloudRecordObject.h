
@interface PKCloudRecordObject : NSObject <NSSecureCoding> {
    NSMutableDictionary * _recordIDToRecord;
}

@property (nonatomic, readonly) NSObject<PKCloudStoreCoding> *item;
@property (nonatomic, readonly) NSSet *records;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithDetailedOutput:(bool)arg1;
- (void)applyCloudRecordObject:(id)arg1;
- (id)description;
- (id)descriptionWithItem:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecords:(id)arg1;
- (id)item;
- (id)primaryIdentifier;
- (id)records;

@end
