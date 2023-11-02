
@interface PXSharedLibraryAssistantParticipantViewModel : PXObservable {
    UIImage * _image;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly, copy) UIImage *image;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)image;
- (id)init;
- (void)performChanges:(id /* block */)arg1;
- (void)setImage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
