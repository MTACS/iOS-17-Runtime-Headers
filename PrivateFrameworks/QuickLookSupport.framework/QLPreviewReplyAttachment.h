
@interface QLPreviewReplyAttachment : NSObject <NSSecureCoding> {
    UTType * _contentType;
    NSData * _data;
}

@property (retain) UTType *contentType;
@property (retain) NSData *data;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentType;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (void)setContentType:(id)arg1;
- (void)setData:(id)arg1;

@end
