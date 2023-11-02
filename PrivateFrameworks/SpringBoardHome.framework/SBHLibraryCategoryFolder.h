
@interface SBHLibraryCategoryFolder : SBFolder {
    SBHLibraryCategoryIdentifier * _libraryCategoryIdentifier;
}

@property (nonatomic, readonly) SBHLibraryCategoryIdentifier *libraryCategoryIdentifier;

- (void).cxx_destruct;
- (id)_indexPathToRevealForJiggleMode;
- (id)initWithDisplayName:(id)arg1 maxListCount:(unsigned long long)arg2 listGridSize:(struct SBHIconGridSize { unsigned short x1; unsigned short x2; })arg3 libraryCategoryIdentifier:(id)arg4;
- (bool)isLibraryCategoryFolder;
- (id)libraryCategoryIdentifier;

@end
