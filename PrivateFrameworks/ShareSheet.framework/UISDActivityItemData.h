
@interface UISDActivityItemData : NSObject <NSSecureCoding> {
    NSMutableDictionary * _attachmentNamesByItem;
    NSMutableDictionary * _dataTypesByItem;
    NSDictionary * _openURLAnnotationsByURL;
    NSMutableDictionary * _previewImageDataByItem;
    NSMutableDictionary * _previewImagesByItem;
    NSArray * _securityContexts;
    NSMutableDictionary * _subjectsByItem;
}

@property (nonatomic, readonly) NSMutableDictionary *attachmentNamesByItem;
@property (nonatomic, readonly) NSMutableDictionary *dataTypesByItem;
@property (nonatomic, retain) NSDictionary *openURLAnnotationsByURL;
@property (nonatomic, readonly) NSMutableDictionary *previewImageDataByItem;
@property (nonatomic, readonly) NSMutableDictionary *previewImagesByItem;
@property (nonatomic, retain) NSArray *securityContexts;
@property (nonatomic, readonly) NSMutableDictionary *subjectsByItem;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAttachmentName:(id)arg1 forItem:(id)arg2;
- (void)addDataType:(id)arg1 forItem:(id)arg2;
- (void)addPreviewImage:(id)arg1 forItem:(id)arg2;
- (void)addPreviewImageData:(id)arg1 forItem:(id)arg2;
- (void)addSubject:(id)arg1 forItem:(id)arg2;
- (id)attachmentNameForItem:(id)arg1;
- (id)attachmentNamesByItem;
- (bool)canAccessFileURL:(id)arg1;
- (id)dataTypeForItem:(id)arg1;
- (id)dataTypesByItem;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)openURLAnnotationsByURL;
- (id)previewImageDataByItem;
- (id)previewImageDataForItem:(id)arg1;
- (id)previewImageForItem:(id)arg1;
- (id)previewImagesByItem;
- (id)securityContexts;
- (void)setOpenURLAnnotationsByURL:(id)arg1;
- (void)setSecurityContexts:(id)arg1;
- (id)subjectForItem:(id)arg1;
- (id)subjectsByItem;

@end
