
@interface SiriAudioSupport.PlayMediaAppSelectionInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void INMediaCategoryAudiobooks;
    void INMediaCategoryGeneral;
    void INMediaCategoryMusic;
    void INMediaCategoryPodcasts;
    void INMediaCategoryRadio;
    void INMediaCategoryVideo;
    void result_clientHourOfDay;
    void result_clientLocaleIdentifier;
    void result_compoundActiveBundleScore;
    void result_compoundMediaTypeBundleScore;
    void result_entitySearchBundleScore;
    void result_foregroundBundle;
    void result_mediaArtistPresent;
    void result_mediaNamePresent;
    void result_nowPlayingBundleScore;
    void result_nowPlayingLastBundleRecency;
    void result_nowPlayingUsage1Day;
    void support_flag;
    void support_unicorn_match;
    void type0;
    void type1;
    void type10;
    void type14;
    void type16;
    void type17;
    void type18;
    void type2;
    void type3;
    void type4;
    void type5;
    void type6;
    void unicorn_flag;
    void vq_21;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
