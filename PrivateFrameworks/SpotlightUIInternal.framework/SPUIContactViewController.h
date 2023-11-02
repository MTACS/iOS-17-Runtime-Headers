
@interface SPUIContactViewController : SPUIViewController <SearchUIBackgroundColorViewProtocol> {
    SearchUIBackgroundColorView * _backgroundColorView;
    NSString * _contactIdentifier;
    bool  _isBackgroundColorViewHidden;
    NSArray * _preferredBundleIdentifiers;
}

@property (retain) SearchUIBackgroundColorView *backgroundColorView;
@property (nonatomic, retain) NSString *contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isBackgroundColorViewHidden;
@property (nonatomic, readonly) NSArray *preferredBundleIdentifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backgroundColorView;
- (id)contactIdentifier;
- (id)init;
- (bool)isBackgroundColorViewHidden;
- (id)preferredBundleIdentifiers;
- (void)setBackgroundColorView:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setIsBackgroundColorViewHidden:(bool)arg1;
- (void)updateWithContactIdentifier:(id)arg1 preferredBundleIdentifiers:(id)arg2;
- (id)viewContainingContent;
- (void)willUpdateFromResultsWithHighlightedResult:(id)arg1 viewController:(id)arg2;

@end
