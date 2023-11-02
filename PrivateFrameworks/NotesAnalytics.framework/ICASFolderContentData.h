
@interface ICASFolderContentData : NSObject <AADataEventType> {
    NSNumber * _noteCount;
}

@property (nonatomic, readonly) NSNumber *noteCount;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithNoteCount:(id)arg1;
- (id)noteCount;
- (id)toDict;

@end
