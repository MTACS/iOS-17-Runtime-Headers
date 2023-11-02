
@interface ICAddAttachmentsManagerAttachmentInfo : NSObject {
    ICAttachment * _attachment;
    NSAttributedString * _attributedContentText;
    UIImage * _image;
    NSData * _mediaData;
    NSString * _mediaFilenameExtension;
    NSURL * _mediaURL;
    NSString * _mediaUTI;
    NSDictionary * _metadata;
    NSString * _title;
    bool  _usesTemporaryFile;
}

@property (nonatomic, retain) ICAttachment *attachment;
@property (nonatomic, retain) NSAttributedString *attributedContentText;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) bool isPhoto;
@property (nonatomic, readonly) bool isVideo;
@property (nonatomic, retain) NSData *mediaData;
@property (nonatomic, retain) NSString *mediaFilenameExtension;
@property (nonatomic, retain) NSURL *mediaURL;
@property (nonatomic, retain) NSString *mediaUTI;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) bool usesTemporaryFile;

- (void).cxx_destruct;
- (id)attachment;
- (id)attachmentIfExistsForAccount:(id)arg1;
- (id)attributedContentText;
- (void)deleteTemporaryImageFileIfNecessary;
- (id)description;
- (id)image;
- (id)initWithFileURL:(id)arg1;
- (bool)isPhoto;
- (bool)isVideo;
- (id)mediaData;
- (id)mediaFilenameExtension;
- (unsigned long long)mediaSize;
- (id)mediaURL;
- (id)mediaUTI;
- (id)metadata;
- (void)setAttachment:(id)arg1;
- (void)setAttributedContentText:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMediaData:(id)arg1;
- (void)setMediaFilenameExtension:(id)arg1;
- (void)setMediaURL:(id)arg1;
- (void)setMediaUTI:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUsesTemporaryFile:(bool)arg1;
- (id)title;
- (bool)usesTemporaryFile;

@end
