
@interface QLGeneratedPreviewParts : QLPreviewParts {
    NSDictionary * _attachments;
    NSData * _data;
    NSMutableDictionary * _idToURL;
    NSString * _mimeType;
    unsigned long long  _stringEncoding;
}

@property (retain) NSDictionary *attachments;
@property (retain) NSData *data;
@property (retain) NSMutableDictionary *idToURL;
@property (retain) NSString *mimeType;
@property unsigned long long stringEncoding;

- (void).cxx_destruct;
- (id)URLRequestForContentID:(id)arg1;
- (void)_processAttachment:(id)arg1 withID:(id)arg2;
- (void)_registerURL:(id)arg1 forContentID:(id)arg2;
- (id)attachments;
- (void)computePreview:(id /* block */)arg1;
- (id)data;
- (id)idToURL;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2 mimeType:(id)arg3 attachments:(id)arg4;
- (id)mimeType;
- (id)newAttachmentURLWithID:(id)arg1 mimeType:(id)arg2 encoding:(unsigned long long)arg3;
- (void)setAttachments:(id)arg1;
- (void)setData:(id)arg1;
- (void)setIdToURL:(id)arg1;
- (void)setMimeType:(id)arg1;
- (void)setStringEncoding:(unsigned long long)arg1;
- (unsigned long long)stringEncoding;

@end
