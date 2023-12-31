
@interface TVPMutableChapterCollection : TVPChapterCollection

@property (nonatomic, retain) id backingData;
@property (nonatomic, retain) NSArray *chapters;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) double refreshInterval;
@property (nonatomic, copy) NSURL *refreshURL;
@property (nonatomic) bool shouldDisplayChapterMarkers;
@property (nonatomic) bool shouldShowDescriptionOnChapterSkip;
@property (nonatomic) bool shouldStartPlaybackFromStartDate;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) long long type;

@end
