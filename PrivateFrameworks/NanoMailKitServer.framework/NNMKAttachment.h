
@interface NNMKAttachment : NSTextAttachment <NSSecureCoding> {
    NSString * _contentId;
    NSString * _fileName;
    unsigned long long  _fileSize;
    NSString * _messageId;
    NSString * _mimePartNumber;
    unsigned long long  _syncState;
    unsigned long long  _type;
    NSString * _url;
}

@property (nonatomic, retain) NSString *contentId;
@property (nonatomic, retain) NSString *fileName;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic, retain) NSString *messageId;
@property (nonatomic, retain) NSString *mimePartNumber;
@property (nonatomic) unsigned long long syncState;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) NSString *url;

+ (bool)isTypeActionable:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileName;
- (unsigned long long)fileSize;
- (id)initWithCoder:(id)arg1;
- (bool)isActionable;
- (bool)isImage;
- (id)messageId;
- (id)mimePartNumber;
- (void)setContentId:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setFileSize:(unsigned long long)arg1;
- (void)setMessageId:(id)arg1;
- (void)setMimePartNumber:(id)arg1;
- (void)setSyncState:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (unsigned long long)syncState;
- (unsigned long long)type;
- (id)url;

@end
