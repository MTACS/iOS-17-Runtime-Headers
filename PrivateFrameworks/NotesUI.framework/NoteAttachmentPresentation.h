
@interface NoteAttachmentPresentation : NSObject <NotesCIDDataProvider> {
    NSString * _contentID;
    NSURL * _contentIDURL;
    NSString * _contentIDURLAbsoluteString;
    NSData * _data;
    NSURL * _dataFileURL;
    NSError * _dataFileURLError;
    NSString * _filename;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
    bool  _image;
    NSString * _mimeType;
    bool  _sourceIsManaged;
}

@property (nonatomic, copy) NSString *contentID;
@property (nonatomic, copy) NSURL *contentIDURL;
@property (nonatomic, copy) NSString *contentIDURLAbsoluteString;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, copy) NSURL *dataFileURL;
@property (nonatomic, retain) NSError *dataFileURLError;
@property (nonatomic, readonly) NSNumber *dataSizeNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *filename;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } iconSize;
@property (getter=isImage, nonatomic) bool image;
@property (nonatomic, copy) NSString *mimeType;
@property (nonatomic, readonly) bool sourceIsManaged;
@property (readonly) Class superclass;

+ (id)attachmentPresentationsForAttachments:(id)arg1;
+ (void)prepareDocumentForPresentationWithAttachmentContentIDs:(id)arg1 withAttachmentPresentations:(id)arg2 occurences:(id*)arg3;
+ (void)prepareDocumentForSerializationWithAttachmentContentIDs:(id)arg1 withAttachmentPresentations:(id)arg2 newPresentationProvider:(id /* block */)arg3 leftoverPresentations:(id*)arg4;
+ (id)presentationSelector;

- (void).cxx_destruct;
- (void)clearCache;
- (id)contentID;
- (id)contentIDURL;
- (id)contentIDURLAbsoluteString;
- (id)data;
- (id)dataFileURL;
- (id)dataFileURLError;
- (id)dataSizeNumber;
- (id)filename;
- (bool)getData:(id*)arg1 mimeType:(id*)arg2 error:(id*)arg3;
- (bool)getPresentationData:(id*)arg1 mimeType:(id*)arg2 error:(id*)arg3;
- (struct CGSize { double x1; double x2; })iconSize;
- (id)initWithData:(id)arg1 contentID:(id)arg2 mimeType:(id)arg3 filename:(id)arg4;
- (id)initWithNoteAttachmentObject:(id)arg1;
- (bool)isImage;
- (id)mimeType;
- (void)setContentID:(id)arg1;
- (void)setContentIDURL:(id)arg1;
- (void)setContentIDURLAbsoluteString:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDataFileURL:(id)arg1;
- (void)setDataFileURLError:(id)arg1;
- (void)setIconSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImage:(bool)arg1;
- (void)setMimeType:(id)arg1;
- (bool)sourceIsManaged;
- (void)updateContentIDURL;

@end
