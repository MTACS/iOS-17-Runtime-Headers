
@interface ICASNoteSelectionData : NSObject <AADataEventType> {
    NSArray * _noteIDs;
}

@property (nonatomic, readonly) NSArray *noteIDs;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithNoteIDs:(id)arg1;
- (id)noteIDs;
- (id)toDict;

@end
