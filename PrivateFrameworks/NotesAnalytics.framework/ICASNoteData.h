
@interface ICASNoteData : NSObject <AADataEventType> {
    NSNumber * _isScrapPaper;
    NSString * _noteID;
    ICASNoteType * _noteType;
}

@property (nonatomic, readonly) NSNumber *isScrapPaper;
@property (nonatomic, readonly) NSString *noteID;
@property (nonatomic, readonly) ICASNoteType *noteType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithNoteID:(id)arg1 noteType:(id)arg2 isScrapPaper:(id)arg3;
- (id)isScrapPaper;
- (id)noteID;
- (id)noteType;
- (id)toDict;

@end
