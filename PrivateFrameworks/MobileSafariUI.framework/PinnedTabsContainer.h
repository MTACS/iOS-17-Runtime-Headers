
@interface PinnedTabsContainer : NSObject <PinnedTabsContainer> {
    NSString * _activeProfileIdentifier;
    bool  _isInDefaultProfile;
    bool  _privateBrowsingEnabled;
}

@property (nonatomic, readonly, copy) NSString *activeProfileIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInDefaultProfile;
@property (getter=isPrivateBrowsingEnabled, nonatomic, readonly) bool privateBrowsingEnabled;
@property (readonly) Class superclass;

+ (id)containerWithActiveProfileIdentifier:(id)arg1;
+ (id)containerWithPrivateBrowsing:(bool)arg1;

- (void).cxx_destruct;
- (id)activeProfileIdentifier;
- (bool)isInDefaultProfile;
- (bool)isPrivateBrowsingEnabled;

@end
