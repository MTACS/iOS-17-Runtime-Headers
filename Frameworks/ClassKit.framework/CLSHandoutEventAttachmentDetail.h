
@interface CLSHandoutEventAttachmentDetail : CLSObject {
    NSString * _attachmentID;
    long long  _contextType;
    int  _handoutAttachmentType;
}

@property (nonatomic, readonly) NSString *attachmentID;
@property (nonatomic, readonly) long long contextType;
@property (nonatomic, readonly) int handoutAttachmentType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)attachmentID;
- (long long)contextType;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (int)handoutAttachmentType;
- (id)init;
- (id)initWithAttachmentID:(id)arg1 handoutAttachmentType:(int)arg2 contextType:(long long)arg3 appIdentifier:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (void)mergeWithObject:(id)arg1;
- (bool)validateObject:(id*)arg1;

@end
