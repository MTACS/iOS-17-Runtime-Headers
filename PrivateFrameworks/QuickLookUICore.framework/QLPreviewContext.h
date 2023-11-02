
@interface QLPreviewContext : NSObject <NSSecureCoding> {
    NSDictionary * _attachments;
    UIColor * _backgroundColor;
    QLTBitmapFormat * _bitmapFormat;
    bool  _canBeEdited;
    bool  _canBeShared;
    NSDictionary * _clientPreviewItemDisplayState;
    NSDictionary * _clientPreviewOptions;
    NSString * _contentType;
    unsigned long long  _editedFileBehavior;
    QLItem * _item;
    NSNumber * _itemSize;
    NSString * _originalContentType;
    NSString * _password;
    unsigned long long  _previewItemType;
    NSString * _previewTitle;
    long long  _processIdentifier;
    unsigned long long  _stringEncoding;
    <QLItemThumbnailGeneratorProtocolInternal> * _thumbnailGenerator;
}

@property (retain) NSDictionary *attachments;
@property (retain) UIColor *backgroundColor;
@property (retain) QLTBitmapFormat *bitmapFormat;
@property bool canBeEdited;
@property bool canBeShared;
@property (retain) NSDictionary *clientPreviewItemDisplayState;
@property (retain) NSDictionary *clientPreviewOptions;
@property (retain) NSString *contentType;
@property unsigned long long editedFileBehavior;
@property (retain) QLItem *item;
@property (retain) NSNumber *itemSize;
@property (retain) NSString *originalContentType;
@property (copy) NSString *password;
@property unsigned long long previewItemType;
@property (retain) NSString *previewTitle;
@property long long processIdentifier;
@property unsigned long long stringEncoding;
@property (retain) <QLItemThumbnailGeneratorProtocolInternal> *thumbnailGenerator;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachments;
- (id)backgroundColor;
- (id)bitmapFormat;
- (bool)canBeEdited;
- (bool)canBeShared;
- (id)clientPreviewItemDisplayState;
- (id)clientPreviewOptions;
- (id)contentType;
- (unsigned long long)editedFileBehavior;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)item;
- (id)itemSize;
- (id)originalContentType;
- (id)password;
- (unsigned long long)previewItemType;
- (id)previewTitle;
- (long long)processIdentifier;
- (void)setAttachments:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBitmapFormat:(id)arg1;
- (void)setCanBeEdited:(bool)arg1;
- (void)setCanBeShared:(bool)arg1;
- (void)setClientPreviewItemDisplayState:(id)arg1;
- (void)setClientPreviewOptions:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setEditedFileBehavior:(unsigned long long)arg1;
- (void)setItem:(id)arg1;
- (void)setItemSize:(id)arg1;
- (void)setOriginalContentType:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPreviewItemType:(unsigned long long)arg1;
- (void)setPreviewTitle:(id)arg1;
- (void)setProcessIdentifier:(long long)arg1;
- (void)setStringEncoding:(unsigned long long)arg1;
- (void)setThumbnailGenerator:(id)arg1;
- (unsigned long long)stringEncoding;
- (id)thumbnailGenerator;

@end
