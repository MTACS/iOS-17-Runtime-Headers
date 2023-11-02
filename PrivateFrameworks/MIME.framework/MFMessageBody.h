
@interface MFMessageBody : NSObject {
    bool  _isEncrypted;
    MFMessage * _message;
}

@property (nonatomic, readonly) bool isEncrypted;

- (void).cxx_destruct;
- (id)attachmentURLs;
- (id)attachments;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(bool)arg3;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(bool)arg3 isComplete:(bool*)arg4;
- (id)htmlContent;
- (id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2;
- (bool)isEncrypted;
- (bool)isHTML;
- (bool)isRich;
- (id)message;
- (unsigned int)numberOfAttachmentsSigned:(bool*)arg1 encrypted:(bool*)arg2;
- (id)rawData;
- (void)setMessage:(id)arg1;
- (id)textHtmlPart;

@end
