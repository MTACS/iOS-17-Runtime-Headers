
@protocol MTPodcastDetailEpisodeSectionDelegate <NSObject>

@required

- (void)episodeSection:(MTPodcastDetailEpisodeSection *)arg1 didChangeObject:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4 newIndex:(unsigned long long)arg5;
- (void)sectionDidChangeContent:(MTPodcastDetailEpisodeSection *)arg1;
- (void)sectionWillChangeContent:(MTPodcastDetailEpisodeSection *)arg1;

@end
