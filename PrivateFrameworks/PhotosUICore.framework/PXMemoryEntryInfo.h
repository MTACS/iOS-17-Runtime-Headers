
@interface PXMemoryEntryInfo : NSObject <NSCopying> {
    NSDate * _endDate;
    NSArray * _memories;
    NSDate * _representativeDate;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly, copy) NSArray *memories;
@property (nonatomic, readonly) NSDate *representativeDate;
@property (nonatomic, readonly) NSDate *startDate;

+ (long long)compareMemoryInfo:(id)arg1 byRelevanceScoreToMemoryInfo:(id)arg2;
+ (long long)compareMemoryInfo:(id)arg1 toMemoryInfo:(id)arg2;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endDate;
- (id)entryByAddingMemory:(id)arg1;
- (id)entryByRemovingMemory:(id)arg1;
- (id)entryByReplacingMemoryInfoAtIndex:(long long)arg1 withMemoryInfo:(id)arg2;
- (unsigned long long)indexOfMemory:(id)arg1;
- (id)initWithMemories:(id)arg1;
- (id)initWithSortedMemories:(id)arg1;
- (id)memories;
- (id)representativeDate;
- (id)startDate;

@end
