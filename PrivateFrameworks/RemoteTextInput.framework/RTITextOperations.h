
@interface RTITextOperations : NSObject <NSSecureCoding, RTICustomDataProtocol> {
    NSDictionary * _attributedPlaceholders;
    NSObject<NSSecureCoding> * _customInfo;
    NSString * _customInfoType;
    SEL  _editingActionSelector;
    NSMutableArray * _fileHandles;
    NSMutableArray * _imageUserInfos;
    RTIInputSourceState * _inputSourceState;
    TIKeyboardIntermediateText * _intermediateText;
    TIKeyboardOutput * _keyboardOutput;
    NSArray * _multilingualLanguages;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _selectionRangeToAssert;
    RTIStyledIntermediateText * _styledIntermediateText;
    NSUUID * _targetSessionUUID;
    NSAttributedString * _textCheckingAnnotatedString;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _textCheckingAnnotationRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _textCheckingAnnotationRemovalRange;
    NSString * _textCheckingAnnotationToRemove;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _textCheckingReplacementRange;
    NSString * _textToAssert;
    NSMutableArray * _typeIdentifiers;
}

@property (nonatomic, readonly) NSAttributedString *attributedInsertionText;
@property (nonatomic, retain) NSDictionary *attributedPlaceholders;
@property (nonatomic, retain) NSObject<NSSecureCoding> *customInfo;
@property (nonatomic, retain) NSString *customInfoType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) SEL editingActionSelector;
@property (nonatomic, retain) NSMutableArray *fileHandles;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *imageUserInfos;
@property (nonatomic, retain) RTIInputSourceState *inputSourceState;
@property (nonatomic, retain) TIKeyboardIntermediateText *intermediateText;
@property (nonatomic, readonly) TIKeyboardOutput *keyboardOutput;
@property (nonatomic, retain) NSArray *multilingualLanguages;
@property (nonatomic, readonly) NSMutableDictionary *mutableAttributedPlaceholders;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectionRangeToAssert;
@property (nonatomic, retain) RTIStyledIntermediateText *styledIntermediateText;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *targetSessionUUID;
@property (nonatomic, copy) NSAttributedString *textCheckingAnnotatedString;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } textCheckingAnnotationRange;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } textCheckingAnnotationRemovalRange;
@property (nonatomic, copy) NSString *textCheckingAnnotationToRemove;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } textCheckingReplacementRange;
@property (nonatomic, copy) NSString *textToAssert;
@property (nonatomic, retain) NSMutableArray *typeIdentifiers;

// Image: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput

+ (id)customInfoDictionary;
+ (void)registerCustomInfoClasses:(id)arg1 forType:(id)arg2;
+ (bool)supportsSecureCoding;
+ (void)unregisterCustomInfoType:(id)arg1;

- (void).cxx_destruct;
- (void)_createAttributedPlaceholdersIfNecessary;
- (id)attributedInsertionText;
- (id)attributedPlaceholders;
- (id)customInfo;
- (id)customInfoType;
- (id)description;
- (SEL)editingActionSelector;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateImagesAndUserInfosUsingBlock:(id /* block */)arg1;
- (void)enumerateImagesUsingBlock:(id /* block */)arg1;
- (id)fileHandles;
- (id)imageUserInfos;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetSessionUUID:(id)arg1;
- (id)inputSourceState;
- (void)insertAttributedText:(id)arg1;
- (void)insertAttributedText:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)insertImageWithFileHandle:(id)arg1 typeIdentifier:(id)arg2;
- (void)insertImageWithFileHandle:(id)arg1 typeIdentifier:(id)arg2 imageUserInfo:(id)arg3;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)intermediateText;
- (bool)isEqual:(id)arg1;
- (id)keyboardOutput;
- (id)multilingualLanguages;
- (id)mutableAttributedPlaceholders;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectionRangeToAssert;
- (void)setAttributedPlaceholders:(id)arg1;
- (void)setCustomInfo:(id)arg1;
- (void)setCustomInfoType:(id)arg1;
- (void)setEditingActionSelector:(SEL)arg1;
- (void)setFileHandles:(id)arg1;
- (void)setImageUserInfos:(id)arg1;
- (void)setInputSourceState:(id)arg1;
- (void)setIntermediateText:(id)arg1;
- (void)setMultilingualLanguages:(id)arg1;
- (void)setSelectionRangeToAssert:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setStyledIntermediateText:(id)arg1;
- (void)setTextCheckingAnnotatedString:(id)arg1;
- (void)setTextCheckingAnnotationRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTextCheckingAnnotationRemovalRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTextCheckingAnnotationToRemove:(id)arg1;
- (void)setTextCheckingReplacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTextToAssert:(id)arg1;
- (void)setTypeIdentifiers:(id)arg1;
- (id)styledIntermediateText;
- (id)targetSessionUUID;
- (id)textCheckingAnnotatedString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textCheckingAnnotationRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textCheckingAnnotationRemovalRange;
- (id)textCheckingAnnotationToRemove;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textCheckingReplacementRange;
- (id)textToAssert;
- (id)typeIdentifiers;

// Image: /System/Library/PrivateFrameworks/AutoFillUI.framework/AutoFillUI

- (void)_assertOrInsertText:(id)arg1 documentTraits:(id)arg2;

@end
