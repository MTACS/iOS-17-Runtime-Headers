
@interface CKMovePhotosChange : NSObject <CKRoughlyEquivalent, NSSecureCoding> {
    CKRecord * _destinationRecord;
    NSString * _sourceRecordChangeTag;
    CKRecordID * _sourceRecordID;
}

@property (nonatomic, retain) CKRecord *destinationRecord;
@property (nonatomic, readonly) CKRoughlyEquivalentProperties *equivalencyProperties;
@property (nonatomic, retain) NSString *sourceRecordChangeTag;
@property (nonatomic, retain) CKRecordID *sourceRecordID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)description;
- (id)destinationRecord;
- (void)encodeWithCoder:(id)arg1;
- (id)equivalencyProperties;
- (id)initWithCoder:(id)arg1;
- (void)setDestinationRecord:(id)arg1;
- (void)setSourceRecordChangeTag:(id)arg1;
- (void)setSourceRecordID:(id)arg1;
- (id)sourceRecordChangeTag;
- (id)sourceRecordID;

@end
