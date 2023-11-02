
@interface GEOResultRefinementMultiSelect : NSObject {
    long long  _clauseType;
    NSString * _displayName;
    NSString * _displayNameForMultiSelected;
    unsigned int  _maximumNumberOfSelectElements;
    NSArray * _multiSelect;
    NSString * _multiSelectIdentifier;
    bool  _showEqualWidthButtonsOnFilterView;
}

@property (nonatomic) long long clauseType;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly) NSString *displayNameForMultiSelected;
@property (nonatomic) unsigned int maximumNumberOfSelectElements;
@property (nonatomic, copy) NSArray *multiSelect;
@property (nonatomic, readonly) NSString *multiSelectIdentifier;
@property (nonatomic, readonly) bool showEqualWidthButtonsOnFilterView;

- (void).cxx_destruct;
- (long long)clauseType;
- (id)convertToGEOPDResultRefinementMultiSelect;
- (id)displayName;
- (id)displayNameForMultiSelected;
- (id)initWithDisplayName:(id)arg1 multiSelect:(id)arg2 maximumNumberOfSelectElements:(unsigned int)arg3 clauseType:(long long)arg4 showEqualWidthButtonsOnFilterView:(bool)arg5 displayNameForMultiSelected:(id)arg6 multiSelectIdentifier:(id)arg7;
- (id)initWithResultRefinementMultiSelect:(id)arg1;
- (unsigned int)maximumNumberOfSelectElements;
- (id)multiSelect;
- (id)multiSelectIdentifier;
- (void)setClauseType:(long long)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setMaximumNumberOfSelectElements:(unsigned int)arg1;
- (void)setMultiSelect:(id)arg1;
- (bool)showEqualWidthButtonsOnFilterView;

@end
