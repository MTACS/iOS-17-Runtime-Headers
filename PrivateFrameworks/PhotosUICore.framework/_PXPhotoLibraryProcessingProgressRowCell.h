
@interface _PXPhotoLibraryProcessingProgressRowCell : PTUIRowTableViewCell {
    UIImage * _briefImage;
    NSString * _briefTitle;
    bool  _hasRequestedBriefDescription;
}

@property (nonatomic, retain) UIImage *briefImage;
@property (nonatomic, retain) NSString *briefTitle;

- (void).cxx_destruct;
- (void)_handleBriefDescriptionResultsWithTitle:(id)arg1 image:(id)arg2;
- (id)briefImage;
- (id)briefTitle;
- (void)setBriefImage:(id)arg1;
- (void)setBriefTitle:(id)arg1;
- (void)updateDisplayedContent;

@end
