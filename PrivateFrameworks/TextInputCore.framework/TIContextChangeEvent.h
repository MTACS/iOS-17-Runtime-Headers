
@interface TIContextChangeEvent : TIUserAction {
    bool  _extendsPriorWord;
    NSString * _inWord;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _inWordRange;
    bool  _isSelection;
    unsigned long long  _selectionLocation;
}

@property (nonatomic) bool extendsPriorWord;
@property (nonatomic, copy) NSString *inWord;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } inWordRange;
@property (nonatomic) bool isSelection;
@property (nonatomic) unsigned long long selectionLocation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)extendsPriorWord;
- (id)inWord;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })inWordRange;
- (id)initWithCoder:(id)arg1;
- (id)initWithTIKeyboardState:(id)arg1 andActionType:(int)arg2;
- (bool)isSelection;
- (unsigned long long)selectionLocation;
- (void)setExtendsPriorWord:(bool)arg1;
- (void)setInWord:(id)arg1;
- (void)setInWordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setIsSelection:(bool)arg1;
- (void)setSelectionLocation:(unsigned long long)arg1;

@end
