
@interface _WBSCKRecordSystemEncoder : NSObject <NSSecureCoding> {
    CKRecord * _record;
}

@property (nonatomic, readonly) CKRecord *record;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (id)record;

@end
