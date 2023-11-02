
@interface VUIMediaStartTimeCollection : NSObject {
    NSMutableArray * _startTimeInfos;
}

@property (nonatomic, readonly) NSArray *allStartTimeInfos;
@property (nonatomic, readonly) VUIMediaStartTimeInfo *preferredStartTimeInfo;
@property (nonatomic, retain) NSMutableArray *startTimeInfos;

+ (void)initialize;

- (void).cxx_destruct;
- (void)addStartTimeInfo:(id)arg1;
- (id)allStartTimeInfos;
- (id)preferredStartTimeInfo;
- (void)removeAllStartTimeInfos;
- (void)setStartTimeInfos:(id)arg1;
- (id)startTimeInfos;

@end
