
@interface PGChapterTitle : NSObject {
    NSDateInterval * _chapterDateInterval;
    NSString * _localizedTitleString;
}

@property (nonatomic, readonly) NSDateInterval *chapterDateInterval;
@property (nonatomic, readonly) NSString *localizedTitleString;

- (void).cxx_destruct;
- (id)chapterDateInterval;
- (id)dictionaryRepresentation;
- (id)initWithLocalizedTitleString:(id)arg1 chapterDateInterval:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)localizedTitleString;

@end
