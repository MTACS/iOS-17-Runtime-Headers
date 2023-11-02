
@interface MusicKit_SoftLinking_MPModelRecentlyAddedKind : MusicKit_SoftLinking_MPModelKind {
    bool  _includeOnlyDownloadedContent;
}

@property (nonatomic, readonly) bool includeOnlyDownloadedContent;

- (bool)includeOnlyDownloadedContent;
- (id)initWithIncludeOnlyDownloadedContent:(bool)arg1;

@end
