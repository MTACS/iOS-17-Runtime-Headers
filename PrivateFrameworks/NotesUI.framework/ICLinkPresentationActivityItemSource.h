
@interface ICLinkPresentationActivityItemSource : NSObject <UIActivityItemLinkPresentationSource> {
    LPFileMetadata * _fileMetadata;
    LPLinkMetadata * _linkMetadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) LPFileMetadata *fileMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LPLinkMetadata *linkMetadata;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;
- (id)detail;
- (id)fileMetadata;
- (id)iconImage;
- (id)linkMetadata;
- (void)setFileMetadata:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setLinkMetadata:(id)arg1;
- (id)title;

@end
