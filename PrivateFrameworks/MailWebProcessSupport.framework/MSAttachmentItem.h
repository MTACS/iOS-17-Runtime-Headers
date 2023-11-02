
@interface MSAttachmentItem : NSObject <NSSecureCoding> {
    NSString * _additionalMarkup;
    NSString * _contentID;
    NSData * _data;
    UTType * _uttype;
}

@property (nonatomic, readonly, copy) NSString *additionalMarkup;
@property (nonatomic, readonly, copy) NSString *contentID;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly) UTType *uttype;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalMarkup;
- (id)contentID;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentID:(id)arg1 uttype:(id)arg2 data:(id)arg3 additionalMarkup:(id)arg4;
- (id)uttype;

@end
