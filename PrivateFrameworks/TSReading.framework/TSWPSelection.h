
@interface TSWPSelection : TSKSelection <NSCopying, TSDTextSelection> {
    int  _caretAffinity;
    unsigned long long  _headChar;
    unsigned long long  _leadingCharIndex;
    bool  _leadingEdge;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _smartFieldRange;
    int  _styleInsertionBehavior;
    unsigned long long  _tailChar;
    int  _type;
    bool  _validVisualRanges;
    struct TSWPRangeVector { 
        struct _NSRange {} *__begin_; 
        struct _NSRange {} *__end_; 
        struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { 
            struct _NSRange {} *__value_; 
        } __end_cap_; 
    }  _visualRanges;
}

@property (nonatomic, readonly) int caretAffinity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long headChar;
@property (nonatomic, readonly) bool isAtEndOfLine;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) bool isInsertionPoint;
@property (nonatomic, readonly) bool isRange;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) bool isVisual;
@property (nonatomic, readonly) unsigned long long leadingCharIndex;
@property (nonatomic, readonly) bool leadingEdge;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } rawRange;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } smartFieldRange;
@property (nonatomic, readonly) int styleInsertionBehavior;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long tailChar;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) bool validVisualRanges;

+ (Class)archivedSelectionClass;
+ (id)selectionWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)selectionWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 type:(int)arg2 leadingEdge:(bool)arg3 storage:(id)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)caretAffinity;
- (long long)compare:(id)arg1;
- (bool)containsCharacterAtIndex:(unsigned long long)arg1;
- (bool)containsCharacterAtIndex:(unsigned long long)arg1 allowRightEdge:(bool)arg2;
- (id)copyWithNewRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)copyWithNewType:(int)arg1;
- (id)copyWithNewType:(int)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)copyWithNewType:(int)arg1 smartFieldRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)copyWithNewVisualRanges:(const void*)arg1;
- (id)copyWithNewVisualTypeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 head:(unsigned long long)arg2 tail:(unsigned long long)arg3;
- (id)copyWithVisualRanges:(const void*)arg1 startChar:(unsigned long long)arg2 endChar:(unsigned long long)arg3 rightToLeft:(bool)arg4 sameLine:(bool)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)end;
- (unsigned long long)headChar;
- (void)i_setVisualRanges:(const void*)arg1;
- (void*)i_visualRanges;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithType:(int)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4;
- (id)initWithType:(int)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 leadingEdge:(bool)arg6 leadingCharIndex:(unsigned long long)arg7;
- (id)initWithType:(int)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 leadingEdge:(bool)arg6 storage:(id)arg7;
- (unsigned long long)insertionChar;
- (bool)intersectsRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)isAtEndOfLine;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentForInsertionStyle:(id)arg1;
- (bool)isInsertionPoint;
- (bool)isRange;
- (bool)isValid;
- (bool)isVisual;
- (unsigned long long)leadingCharIndex;
- (bool)leadingEdge;
- (unsigned long long)leftEdge;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rawRange;
- (unsigned long long)rightEdge;
- (void)setHeadChar:(unsigned long long)arg1;
- (void)setHeadChar:(unsigned long long)arg1 tailChar:(unsigned long long)arg2;
- (void)setTailChar:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })smartFieldRange;
- (unsigned long long)start;
- (int)styleInsertionBehavior;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })superRange;
- (unsigned long long)tailChar;
- (int)type;
- (bool)validVisualRanges;
- (unsigned long long)visualRangeCount;
- (const void*)visualRanges;
- (id)visualRangesArray;

@end
