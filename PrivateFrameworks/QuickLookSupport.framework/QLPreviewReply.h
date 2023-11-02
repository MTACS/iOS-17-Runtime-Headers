
@interface QLPreviewReply : NSObject <NSSecureCoding> {
    NSDictionary * _attachments;
    QLTBitmapFormat * _bitmapFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    UTType * _contentType;
    NSData * _data;
    id /* block */  _dataCreationBlock;
    id /* block */  _documentCreationBlock;
    id /* block */  _drawInContextBlock;
    QLURLHandler * _fileURLHandler;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumSize;
    unsigned long long  _replyType;
    unsigned long long  _stringEncoding;
    NSString * _title;
    bool  _wantsBorder;
}

@property (copy) NSDictionary *attachments;
@property (retain) QLTBitmapFormat *bitmapFormat;
@property struct CGSize { double x1; double x2; } contentSize;
@property (retain) UTType *contentType;
@property (retain) NSData *data;
@property (nonatomic, copy) id /* block */ dataCreationBlock;
@property (nonatomic, copy) id /* block */ documentCreationBlock;
@property (nonatomic, copy) id /* block */ drawInContextBlock;
@property (retain) QLURLHandler *fileURLHandler;
@property struct CGSize { double x1; double x2; } minimumSize;
@property unsigned long long replyType;
@property unsigned long long stringEncoding;
@property (copy) NSString *title;
@property bool wantsBorder;

// Image: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachments;
- (id)bitmapFormat;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)contentType;
- (id)data;
- (id /* block */)dataCreationBlock;
- (id /* block */)documentCreationBlock;
- (id /* block */)drawInContextBlock;
- (id)drawWithContext:(struct CGContext { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURLHandler;
- (id)init;
- (id)initForPDFWithPageSize:(struct CGSize { double x1; double x2; })arg1 documentCreationBlock:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextSize:(struct CGSize { double x1; double x2; })arg1 isBitmap:(bool)arg2 drawingBlock:(id /* block */)arg3;
- (id)initWithDataOfContentType:(id)arg1 contentSize:(struct CGSize { double x1; double x2; })arg2 dataCreationBlock:(id /* block */)arg3;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 forcedContentType:(id)arg2;
- (id)initWithViewControllerOfPreferredContentSize:(struct CGSize { double x1; double x2; })arg1 minimumSize:(struct CGSize { double x1; double x2; })arg2 title:(id)arg3 wantsBorder:(bool)arg4;
- (id)initWithViewControllerOfPreferredContentSize:(struct CGSize { double x1; double x2; })arg1 title:(id)arg2 wantsBorder:(bool)arg3;
- (struct CGSize { double x1; double x2; })minimumSize;
- (unsigned long long)replyType;
- (void)setAttachments:(id)arg1;
- (void)setBitmapFormat:(id)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentType:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDataCreationBlock:(id /* block */)arg1;
- (void)setDocumentCreationBlock:(id /* block */)arg1;
- (void)setDrawInContextBlock:(id /* block */)arg1;
- (void)setFileURLHandler:(id)arg1;
- (void)setMinimumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setReplyType:(unsigned long long)arg1;
- (void)setStringEncoding:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setWantsBorder:(bool)arg1;
- (unsigned long long)stringEncoding;
- (id)title;
- (id)updateFromDataCreationBlock;
- (void)updateWithImageData:(id)arg1 bitmapFormat:(id)arg2;
- (void)updateWithPDFData:(id)arg1;
- (bool)wantsBorder;

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

- (id)updateFromDocumentCreationBlock;

@end
