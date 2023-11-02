
@interface MCDBrowsableContentUtilities : NSObject {
    NSArray * _nowPlayingIdentifiers;
}

@property (nonatomic, readonly) NSArray *firstPartyAppBundleIDs;
@property (nonatomic, retain) NSArray *nowPlayingIdentifiers;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)firstPartyAppBundleIDs;
- (id)nowPlayingIdentifiers;
- (void)setNowPlayingIdentifiers:(id)arg1;

@end
