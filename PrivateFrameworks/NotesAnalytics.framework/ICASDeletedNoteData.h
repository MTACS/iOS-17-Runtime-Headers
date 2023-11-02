
@interface ICASDeletedNoteData : NSObject <AADataEventType> {
    NSNumber * _deletedNoteCount;
}

@property (nonatomic, readonly) NSNumber *deletedNoteCount;

+ (id)dataName;

- (void).cxx_destruct;
- (id)deletedNoteCount;
- (id)initWithDeletedNoteCount:(id)arg1;
- (id)toDict;

@end
