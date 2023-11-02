
@interface NSTextStorage : NSMutableAttributedString <NSSecureCoding> {
    bool  __isSwiftAttributedString;
    long long  _editedDelta;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _editedRange;
    bool  _ensuresFixingAttributes;
    bool  _ensuresFixingFontAttributes;
    struct { 
        unsigned int editedMask : 8; 
        unsigned int postWillProcess : 1; 
        unsigned int postDidProcess : 1; 
        unsigned int  : 6; 
        unsigned int disabled : 16; 
    }  _flags;
    long long  _fontFixingDisabledCount;
    Class  _intentResolver;
    NSMutableArray * _layoutManagers;
    bool  _shouldSetOriginalFontAttribute;
    id  _sideData;
    <NSTextStorageObservingPrivate> * _textStorageObserver;
}

@property bool _isSwiftAttributedString;
@property (nonatomic, readonly) long long changeInLength;
@property (nonatomic) <NSTextStorageDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long editedMask;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } editedRange;
@property bool ensuresFixingAttributes;
@property bool ensuresFixingFontAttributes;
@property (nonatomic, readonly) bool fixesAttributesLazily;
@property (nonatomic, readonly, copy) NSArray *layoutManagers;
@property (nonatomic) <NSTextStorageObserving> *textStorageObserver;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (bool)_attributeFixingInProgress;
- (void)_fixAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)_forceFixAttributes;
- (Class)_intentResolver;
- (bool)_isEditing;
- (bool)_isSwiftAttributedString;
- (bool)_lockForReading;
- (bool)_lockForWriting;
- (bool)_lockForWritingWithExceptionHandler:(bool)arg1;
- (void)_notifyEdited:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 changeInLength:(long long)arg3 invalidatedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)_nsAttributedStringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeByEstimatingAttributeFixingForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_setAttributeFixingInProgress:(bool)arg1;
- (void)_setEditedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_setForceFixAttributes:(bool)arg1;
- (void)_setIntentResolver:(Class)arg1;
- (void)_setShouldSetOriginalFontAttribute:(bool)arg1;
- (void)_setUsesSimpleTextEffects:(bool)arg1;
- (bool)_shouldFixFontAttributes;
- (bool)_shouldSetOriginalFontAttribute;
- (void)_unlock;
- (bool)_usesSimpleTextEffects;
- (void)addLayoutManager:(id)arg1;
- (void)beginEditing;
- (long long)changeInLength;
- (Class)classForCoder;
- (void)coordinateAccess:(id /* block */)arg1;
- (void)coordinateEditing:(id /* block */)arg1;
- (void)coordinateReading:(id /* block */)arg1;
- (id)cuiCatalog;
- (id)cuiStyleEffects;
- (void)dealloc;
- (id)delegate;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 changeInLength:(long long)arg3;
- (unsigned long long)editedMask;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })editedRange;
- (void)encodeWithCoder:(id)arg1;
- (void)endEditing;
- (void)ensureAttributesAreFixedInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)ensuresFixingAttributes;
- (bool)ensuresFixingFontAttributes;
- (void)finalize;
- (void)fixFontAttributeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)fixesAttributesLazily;
- (void)fontSetChanged;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidateAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)layoutManagers;
- (void)processEditing;
- (void)removeLayoutManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditedMask:(unsigned long long)arg1;
- (void)setEnsuresFixingAttributes:(bool)arg1;
- (void)setEnsuresFixingFontAttributes:(bool)arg1;
- (void)setTextStorageController:(id)arg1;
- (void)setTextStorageObserver:(id)arg1;
- (void)set_isSwiftAttributedString:(bool)arg1;
- (id)textStorageController;
- (id)textStorageObserver;

// Image: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit

- (long long)writingDirectionOfLine:(long long)arg1 usingLayoutManager:(id)arg2 textContainer:(id)arg3;

// Image: /System/Library/PrivateFrameworks/JetUI.framework/JetUI

- (long long)juWritingDirectionOfLine:(long long)arg1 usingLayoutManager:(id)arg2 textContainer:(id)arg3;

// Image: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI

- (long long)writingDirectionOfLine:(long long)arg1 usingLayoutManager:(id)arg2 textContainer:(id)arg3;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)_UIUndoRedoAttributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_UIUndoRedoTextOperation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

- (long long)writingDirectionOfLine:(long long)arg1 usingLayoutManager:(id)arg2 textContainer:(id)arg3;

@end
