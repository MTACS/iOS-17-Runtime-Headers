
@interface NSTextContentStorage : NSTextContentManager <NSTextStorageObserving> {
    struct { id *x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; id x3[64]; long long x4; struct _NSRange { unsigned long long x_5_1_1; unsigned long long x_5_1_2; } x5; unsigned long long x6; long long x7; bool x8; bool x9; } * _activeEnumerationCache;
    NSAttributedString * _attributedString;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _cachedRange;
    bool  _copiesContentsInTextParagraphs;
    NSCountableTextRange * _documentRange;
    long long  _editedDelta;
    unsigned long long  _editedMask;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _editedRange;
    NSStorage * _elements;
    bool  _includesTextListMarkers;
    NSRunStorage * _indexTable;
    long long  _modifiedDocumentLengthDelta;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _modifiedRange;
    bool  _notifyingToFixSelection;
    NSTextStorage * _textStorage;
}

@property (copy) NSAttributedString *attributedString;
@property bool copiesContentsInTextParagraphs;
@property (readonly, copy) NSString *debugDescription;
@property <NSTextContentStorageDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSCountableTextRange *documentRange;
@property (readonly) unsigned long long hash;
@property bool includesTextListMarkers;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTextStorage *textStorage;

+ (bool)__isNotesTextContentStorageClass;
+ (bool)_includesTextListMarkers;
+ (bool)_usesTextListElements;
+ (bool)supportsSecureCoding;

- (void)_commonInitialization;
- (bool)_supportsTextAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)adjustedRangeFromRange:(id)arg1 forEditingTextSelection:(bool)arg2;
- (id)attributedString;
- (id)attributedStringForTextElement:(id)arg1;
- (id)attributedStringForTextElements:(id)arg1;
- (void)beginEditingTransaction;
- (bool)containsExtraLineFragment;
- (bool)copiesContentsInTextParagraphs;
- (void)dealloc;
- (id)delegate;
- (id)documentRange;
- (void)encodeWithCoder:(id)arg1;
- (void)endEditingTransaction;
- (id)enumerateTextElementsFromLocation:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (bool)includesTextListMarkers;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCountableDataSource;
- (id)locationFromLocation:(id)arg1 offset:(long long)arg2;
- (id)locationFromLocation:(id)arg1 withOffset:(long long)arg2;
- (long long)offsetFromLocation:(id)arg1 toLocation:(id)arg2;
- (void)performEditingTransactionForTextStorage:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)performEditingTransactionForTextStorage:(id)arg1 withBlock:(id /* block */)arg2;
- (void)processEditingForTextStorage:(id)arg1 edited:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4 invalidatedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (void)replaceContentsInRange:(id)arg1 withTextElements:(id)arg2;
- (void)setAttributedString:(id)arg1;
- (void)setCopiesContentsInTextParagraphs:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIncludesTextListMarkers:(bool)arg1;
- (void)setTextStorage:(id)arg1;
- (void)synchronizeTextLayoutManagers:(id /* block */)arg1;
- (void)synchronizeToBackingStore:(id /* block */)arg1;
- (id)textElementForAttributedString:(id)arg1;
- (id)textElementsForAttributedString:(id)arg1;
- (id)textStorage;
- (void)updateRangesForTextElement:(id)arg1 locationDelta:(long long)arg2;

@end
