
@interface ICASNoteEditorCallOutBarData : NSObject <AADataEventType> {
    ICASNoteEditorCallOutBarButtonType * _noteEditorCallOutBarButtonType;
}

@property (nonatomic, readonly) ICASNoteEditorCallOutBarButtonType *noteEditorCallOutBarButtonType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithNoteEditorCallOutBarButtonType:(id)arg1;
- (id)noteEditorCallOutBarButtonType;
- (id)toDict;

@end
