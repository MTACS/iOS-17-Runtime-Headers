
@interface SBHTestAppIconDescriptor : NSObject <SBHTestIconDescriptor> {
    NSString * _bundleIdentifier;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithAppIconBundleIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)sbh_iconDescriptorType;
- (bool)sbh_isValidWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

+ (id)appStore;
+ (id)books;
+ (id)camera;
+ (id)contacts;
+ (id)documents;
+ (id)facetime;
+ (id)findMy;
+ (id)health;
+ (id)home;
+ (id)iTunesStore;
+ (id)maps;
+ (id)news;
+ (id)passbook;
+ (id)podcasts;
+ (id)preferences;
+ (id)reminders;
+ (id)shortcuts;
+ (id)tips;
+ (id)translate;
+ (id)tv;
+ (id)watch;

@end
