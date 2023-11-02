
@interface TIKeyboardInteractionProtocolEventContextDidChange : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent> {
    bool  _cursorMoved;
    TIDocumentState * _documentState;
    bool  _extendsPriorWord;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _inWordRange;
    unsigned long long  _selectionLocation;
    NSString * _word;
    bool  _wordDelete;
}

@property (nonatomic, readonly) bool cursorMoved;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TIDocumentState *documentState;
@property (nonatomic, readonly) bool extendsPriorWord;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } inWordRange;
@property (nonatomic, readonly) unsigned long long selectionLocation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *word;
@property (nonatomic, readonly) bool wordDelete;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)cursorMoved;
- (id)description;
- (id)documentState;
- (void)encodeWithCoder:(id)arg1;
- (bool)extendsPriorWord;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })inWordRange;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1 wordDelete:(bool)arg2 cursorMoved:(bool)arg3 extendsPriorWord:(bool)arg4 inWord:(id)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 selectionLocation:(unsigned long long)arg7 keyboardState:(id)arg8;
- (unsigned long long)selectionLocation;
- (void)sendTo:(id)arg1;
- (id)word;
- (bool)wordDelete;

@end
