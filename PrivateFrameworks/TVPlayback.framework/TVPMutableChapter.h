
@interface TVPMutableChapter : TVPChapter

@property (nonatomic, copy) NSString *chapterDescription;
@property (nonatomic, retain) TVPDateRange *dateRange;
@property (nonatomic, copy) NSString *localizedName;
@property (nonatomic, retain) TVPTimeRange *timeRange;

@end
