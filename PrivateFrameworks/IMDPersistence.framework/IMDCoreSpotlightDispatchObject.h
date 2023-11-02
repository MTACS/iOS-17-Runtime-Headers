
@interface IMDCoreSpotlightDispatchObject : NSObject {
    bool  _allowsOverrideOfObjects;
    CRRecentContactsLibrary * _recentsInstance;
    bool  _shouldAddToCoreRecents;
    bool  _shouldAddToSpotlight;
    bool  _shouldAddToSuggestions;
}

@property (nonatomic) bool allowsOverrideOfObjects;
@property (nonatomic, retain) CRRecentContactsLibrary *recentsInstance;
@property (nonatomic) bool shouldAddToCoreRecents;
@property (nonatomic) bool shouldAddToSpotlight;
@property (nonatomic) bool shouldAddToSuggestions;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)allowsOverrideOfObjects;
- (id)init;
- (id)recentsInstance;
- (void)setAllowsOverrideOfObjects:(bool)arg1;
- (void)setRecentsInstance:(id)arg1;
- (void)setShouldAddToCoreRecents:(bool)arg1;
- (void)setShouldAddToSpotlight:(bool)arg1;
- (void)setShouldAddToSuggestions:(bool)arg1;
- (bool)shouldAddToCoreRecents;
- (bool)shouldAddToSpotlight;
- (bool)shouldAddToSuggestions;

@end
