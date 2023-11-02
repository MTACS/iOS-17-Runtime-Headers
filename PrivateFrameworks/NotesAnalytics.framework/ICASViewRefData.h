
@interface ICASViewRefData : NSObject <AADataEventType> {
    NSString * _linkedNoteId;
}

@property (nonatomic, readonly) NSString *linkedNoteId;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithLinkedNoteId:(id)arg1;
- (id)linkedNoteId;
- (id)toDict;

@end
