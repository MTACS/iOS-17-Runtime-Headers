
@interface _PXStoryMemoryGraphChapter : NSObject <PXStoryMutableChapter> {
    NSMutableDictionary * _graphChapterDictionary;
}

@property (nonatomic, copy) NSDictionary *graphChapterDictionary;
@property (nonatomic, copy) NSString *localizedSubtitle;
@property (nonatomic, copy) NSString *localizedTitle;

- (void).cxx_destruct;
- (id)graphChapterDictionary;
- (id)init;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (void)setGraphChapterDictionary:(id)arg1;
- (void)setLocalizedSubtitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;

@end
