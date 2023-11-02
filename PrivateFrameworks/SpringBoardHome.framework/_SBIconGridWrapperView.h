
@interface _SBIconGridWrapperView : UIImageView {
    _SBFolderPageElement * _element;
    SBFolderIconImageView * _folderIconImageView;
}

@property (nonatomic, retain) _SBFolderPageElement *element;
@property (nonatomic) SBFolderIconImageView *folderIconImageView;

- (void).cxx_destruct;
- (id)element;
- (id)folderIconImageView;
- (void)positionAtRow:(unsigned long long)arg1;
- (void)reposition;
- (void)setElement:(id)arg1;
- (void)setFolderIconImageView:(id)arg1;

@end
