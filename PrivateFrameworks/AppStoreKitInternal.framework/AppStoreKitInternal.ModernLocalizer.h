
@interface AppStoreKitInternal.ModernLocalizer : NSObject <AppStoreKitInternal.LocalizerProtocol> {
    void legacyLocalizer;
    void localizer;
}

@property (nonatomic, readonly) NSString *arcadeWordmarkAssetName;
@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)arcadeWordmarkAssetName;
- (id)decimal:(id)arg1;
- (id)decimal:(id)arg1 :(long long)arg2;
- (id)fileSize:(id)arg1;
- (id)formatDate:(id)arg1 :(id)arg2;
- (id)formatDateInSentence:(id)arg1 :(id)arg2 :(id)arg3;
- (id)formatDateWithContext:(id)arg1 :(id)arg2 :(id)arg3;
- (id)formatDuration:(long long)arg1 :(id)arg2;
- (id)formattedCount:(id)arg1;
- (id)formattedCountForPreferredLocale:(id)arg1 :(id)arg2;
- (id)identifier;
- (id)init;
- (id)relativeDate:(id)arg1;
- (id)string:(id)arg1;
- (id)stringForPreferredLocale:(id)arg1 :(id)arg2;
- (id)stringWithCount:(id)arg1 :(long long)arg2;
- (id)stringWithCounts:(id)arg1 :(id)arg2;
- (id)timeAgo:(id)arg1;
- (id)timeAgoWithContext:(id)arg1 :(id)arg2;

@end
