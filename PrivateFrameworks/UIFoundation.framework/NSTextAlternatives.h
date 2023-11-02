
@interface NSTextAlternatives : NSObject <NSSecureCoding> {
    NSArray * _alternativeStrings;
    id  _internal;
    bool  _isLowConfidence;
    NSString * _primaryString;
}

@property (readonly) NSArray *alternativeStrings;
@property (nonatomic) bool isLowConfidence;
@property (readonly) NSString *primaryString;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

+ (bool)supportsSecureCoding;

- (id)alternativeAtIndex:(unsigned long long)arg1;
- (id)alternativeStrings;
- (id)alternatives;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginalText:(id)arg1 alternatives:(id)arg2;
- (id)initWithOriginalText:(id)arg1 alternatives:(id)arg2 identifier:(id)arg3;
- (id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2;
- (id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 identifier:(id)arg3;
- (id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 identifier:(id)arg3 isLowConfidence:(bool)arg4;
- (id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 isLowConfidence:(bool)arg3;
- (bool)isLowConfidence;
- (void)noteSelectedAlternativeString:(id)arg1;
- (unsigned long long)numberOfAlternatives;
- (id)originalText;
- (id)primaryString;
- (void)setIsLowConfidence:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)attributedText:(id)arg1 withAlternativeTexts:(id)arg2;
+ (id)attributedText:(id)arg1 withAlternativeTexts:(id)arg2 style:(long long)arg3;

@end
