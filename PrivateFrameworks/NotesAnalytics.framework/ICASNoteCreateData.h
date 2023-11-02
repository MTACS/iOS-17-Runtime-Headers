
@interface ICASNoteCreateData : NSObject <AADataEventType> {
    ICASNoteCreateApproach * _noteCreateApproach;
}

@property (nonatomic, readonly) ICASNoteCreateApproach *noteCreateApproach;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithNoteCreateApproach:(id)arg1;
- (id)noteCreateApproach;
- (id)toDict;

@end
