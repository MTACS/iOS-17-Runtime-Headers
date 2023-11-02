
@interface TIUserAction : NSObject <NSSecureCoding> {
    int  _actionType;
    TIDocumentState * _documentState;
    double  _endTime;
    TIKeyboardState * _keyboardState;
    double  _occurenceTime;
    double  _startTime;
}

@property (nonatomic) int actionType;
@property (nonatomic, retain) TIDocumentState *documentState;
@property (nonatomic) double endTime;
@property (nonatomic, retain) TIKeyboardState *keyboardState;
@property (nonatomic) double occurenceTime;
@property (nonatomic) double startTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)actionType;
- (id)description;
- (id)documentState;
- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (id)initWithCoder:(id)arg1;
- (id)initWithTIKeyboardState:(id)arg1;
- (id)keyboardState;
- (double)occurenceTime;
- (void)setActionType:(int)arg1;
- (void)setDocumentState:(id)arg1;
- (void)setEndTime:(double)arg1;
- (void)setKeyboardState:(id)arg1;
- (void)setOccurenceTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;

@end
