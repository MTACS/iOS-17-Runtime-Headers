
@interface ICASNoteEditorCallOutBarButtonType : NSObject <AADataType> {
    long long  _noteEditorCallOutBarButtonType;
}

@property (nonatomic, readonly) long long noteEditorCallOutBarButtonType;

- (id)initWithNoteEditorCallOutBarButtonType:(long long)arg1;
- (long long)noteEditorCallOutBarButtonType;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
