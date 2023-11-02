
@interface SBHLibraryAdditionalItemsIndicatorIcon : SBFolderIcon {
    SBHLibraryCategory * _category;
}

@property (nonatomic, readonly) SBHLibraryCategory *category;

- (void).cxx_destruct;
- (id)category;
- (Class)iconImageViewClassForLocation:(id)arg1;
- (id)initWithCategory:(id)arg1;
- (bool)isAdditionalItemsIndicatorIcon;

@end
