
@interface WFCompactFileThumbnailViewController : WFCompactThumbnailViewController <UIPointerInteractionDelegate> {
    WFFileType * _fileType;
    NSString * _filename;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WFFileType *fileType;
@property (nonatomic, readonly) NSString *filename;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)contentHeightForWidth:(double)arg1;
- (id)fileType;
- (id)filename;
- (id)initWithFileType:(id)arg1 filename:(id)arg2;
- (void)loadView;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
