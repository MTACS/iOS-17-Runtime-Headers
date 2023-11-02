
@interface ICASSearchResultCountData : NSObject <AADataEventType> {
    NSNumber * _attachmentsCount;
    NSNumber * _notesCount;
    NSNumber * _topHitCount;
}

@property (nonatomic, readonly) NSNumber *attachmentsCount;
@property (nonatomic, readonly) NSNumber *notesCount;
@property (nonatomic, readonly) NSNumber *topHitCount;

+ (id)dataName;

- (void).cxx_destruct;
- (id)attachmentsCount;
- (id)initWithTopHitCount:(id)arg1 notesCount:(id)arg2 attachmentsCount:(id)arg3;
- (id)notesCount;
- (id)toDict;
- (id)topHitCount;

@end
