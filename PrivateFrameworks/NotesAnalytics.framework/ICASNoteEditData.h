
@interface ICASNoteEditData : NSObject <AADataEventType> {
    ICASNoteEditContext * _noteEditContext;
}

@property (nonatomic, readonly) ICASNoteEditContext *noteEditContext;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithNoteEditContext:(id)arg1;
- (id)noteEditContext;
- (id)toDict;

@end
