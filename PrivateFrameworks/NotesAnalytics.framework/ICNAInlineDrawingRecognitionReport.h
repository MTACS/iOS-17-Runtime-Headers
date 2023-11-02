
@interface ICNAInlineDrawingRecognitionReport : NSObject {
    ICASAccountData * _accountData;
    ICASDrawingRecognitionData * _drawingRecognitionData;
    ICASNoteAccessData * _noteAccessData;
    ICASNoteData * _noteData;
}

@property (nonatomic, retain) ICASAccountData *accountData;
@property (nonatomic, retain) ICASDrawingRecognitionData *drawingRecognitionData;
@property (nonatomic, retain) ICASNoteAccessData *noteAccessData;
@property (nonatomic, retain) ICASNoteData *noteData;

- (void).cxx_destruct;
- (id)accountData;
- (id)drawingRecognitionData;
- (id)noteAccessData;
- (id)noteData;
- (void)setAccountData:(id)arg1;
- (void)setDrawingRecognitionData:(id)arg1;
- (void)setNoteAccessData:(id)arg1;
- (void)setNoteData:(id)arg1;

@end
