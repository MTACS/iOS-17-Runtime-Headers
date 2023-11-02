
@interface _SFAccountTableConfiguration : NSObject {
    bool  _isForFillingIndividualAccountFields;
    bool  _shouldConfigureMultipleSelectionDuringEditing;
    bool  _shouldShowIcons;
    bool  _shouldShowSearchBar;
    bool  _supportsDelete;
    bool  _supportsOngoingCredentialSharing;
    bool  _supportsShare;
}

@property (nonatomic) bool isForFillingIndividualAccountFields;
@property (nonatomic) bool shouldConfigureMultipleSelectionDuringEditing;
@property (nonatomic) bool shouldShowIcons;
@property (nonatomic) bool shouldShowSearchBar;
@property (nonatomic) bool supportsDelete;
@property (nonatomic) bool supportsOngoingCredentialSharing;
@property (nonatomic) bool supportsShare;

- (bool)isForFillingIndividualAccountFields;
- (void)setIsForFillingIndividualAccountFields:(bool)arg1;
- (void)setShouldConfigureMultipleSelectionDuringEditing:(bool)arg1;
- (void)setShouldShowIcons:(bool)arg1;
- (void)setShouldShowSearchBar:(bool)arg1;
- (void)setSupportsDelete:(bool)arg1;
- (void)setSupportsOngoingCredentialSharing:(bool)arg1;
- (void)setSupportsShare:(bool)arg1;
- (bool)shouldConfigureMultipleSelectionDuringEditing;
- (bool)shouldShowIcons;
- (bool)shouldShowSearchBar;
- (bool)supportsDelete;
- (bool)supportsOngoingCredentialSharing;
- (bool)supportsShare;

@end
