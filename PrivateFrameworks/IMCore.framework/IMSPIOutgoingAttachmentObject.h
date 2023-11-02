
@interface IMSPIOutgoingAttachmentObject : NSObject {
    NSString * _fileURL;
    bool  _isSensitive;
}

@property (retain) NSString *fileURL;
@property bool isSensitive;

- (void).cxx_destruct;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1 isSensitive:(bool)arg2;
- (bool)isSensitive;
- (void)setFileURL:(id)arg1;
- (void)setIsSensitive:(bool)arg1;

@end
