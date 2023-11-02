
@interface TIKeystrokeRecord : NSObject {
    NSString * _documentState;
    NSArray * _inlineCompletionBarState;
    NSString * _insertedKey;
    NSString * _intendedKey;
    NSArray * _predictionBarState;
    TIKeyboardTouchEvent * _touch;
    TIPointError * _touchError;
    NSString * _touchedKey;
}

@property (nonatomic, copy) NSString *documentState;
@property (nonatomic, retain) NSArray *inlineCompletionBarState;
@property (nonatomic, copy) NSString *insertedKey;
@property (nonatomic, copy) NSString *intendedKey;
@property (nonatomic, retain) NSArray *predictionBarState;
@property (nonatomic, retain) TIKeyboardTouchEvent *touch;
@property (nonatomic, retain) TIPointError *touchError;
@property (nonatomic, copy) NSString *touchedKey;

+ (id)keystrokeRecord;

- (void).cxx_destruct;
- (id)documentState;
- (id)init;
- (id)inlineCompletionBarState;
- (id)insertedKey;
- (id)intendedKey;
- (id)predictionBarState;
- (void)setDocumentState:(id)arg1;
- (void)setInlineCompletionBarState:(id)arg1;
- (void)setInsertedKey:(id)arg1;
- (void)setIntendedKey:(id)arg1;
- (void)setPredictionBarState:(id)arg1;
- (void)setTouch:(id)arg1;
- (void)setTouchError:(id)arg1;
- (void)setTouchedKey:(id)arg1;
- (id)touch;
- (id)touchError;
- (id)touchedKey;

@end
