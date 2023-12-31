
@interface MFAttachmentPasteboardRepresentation : NSObject <MFAttachmentPasteboardRepresentation, NSSecureCoding> {
    NSData * _data;
    NSString * _mimeType;
    NSString * _name;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSString *mimeType;
@property (nonatomic, retain) NSString *name;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAttachment:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMFAttachment:(id)arg1;
- (bool)isValid;
- (id)mimeType;
- (id)name;
- (void)setData:(id)arg1;
- (void)setMimeType:(id)arg1;
- (void)setName:(id)arg1;

@end
