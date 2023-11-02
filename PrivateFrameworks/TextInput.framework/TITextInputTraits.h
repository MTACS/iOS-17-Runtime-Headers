
@interface TITextInputTraits : NSObject <NSCopying, NSSecureCoding> {
    union { 
        long long integerValue; 
        struct { 
            unsigned int inlineCompletionType : 2; 
        } fields; 
    }  _auxMask;
    union { 
        long long integerValue; 
        struct { 
            unsigned int autocapitalizationType : 2; 
            unsigned int autocorrectionType : 2; 
            unsigned int spellCheckingType : 2; 
            unsigned int keyboardType : 5; 
            unsigned int keyboardAppearance : 3; 
            unsigned int returnKeyType : 5; 
            unsigned int textScriptType : 4; 
            unsigned int enablesReturnKeyAutomatically : 1; 
            unsigned int secureTextEntry : 1; 
            unsigned int disablePrediction : 1; 
            unsigned int smartInsertDeleteType : 2; 
            unsigned int smartQuotesType : 2; 
            unsigned int smartDashesType : 2; 
        } fields; 
    }  _mask;
    NSString * _recentInputIdentifier;
    NSString * _textContentType;
    unsigned long long  _version;
}

@property (nonatomic) unsigned long long autocapitalizationType;
@property (nonatomic) unsigned long long autocorrectionType;
@property (nonatomic) bool disablePrediction;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic) unsigned long long inlineCompletionType;
@property (nonatomic) unsigned long long keyboardAppearance;
@property (nonatomic) unsigned long long keyboardType;
@property (nonatomic, copy) NSString *recentInputIdentifier;
@property (nonatomic) unsigned long long returnKeyType;
@property (nonatomic) bool secureTextEntry;
@property (nonatomic) bool smartDashesEnabled;
@property (nonatomic) unsigned long long smartDashesType;
@property (nonatomic) bool smartInsertDeleteEnabled;
@property (nonatomic) unsigned long long smartInsertDeleteType;
@property (nonatomic) bool smartQuotesEnabled;
@property (nonatomic) unsigned long long smartQuotesType;
@property (nonatomic) unsigned long long spellCheckingType;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic) unsigned long long textScriptType;
@property (nonatomic, readonly) unsigned long long version;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)autocapitalizationType;
- (unsigned long long)autocorrectionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)disablePrediction;
- (bool)enablesReturnKeyAutomatically;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)inlineCompletionType;
- (bool)isEqual:(id)arg1;
- (unsigned long long)keyboardAppearance;
- (unsigned long long)keyboardType;
- (id)recentInputIdentifier;
- (unsigned long long)returnKeyType;
- (bool)secureTextEntry;
- (void)setAutocapitalizationType:(unsigned long long)arg1;
- (void)setAutocorrectionType:(unsigned long long)arg1;
- (void)setDisablePrediction:(bool)arg1;
- (void)setEnablesReturnKeyAutomatically:(bool)arg1;
- (void)setInlineCompletionType:(unsigned long long)arg1;
- (void)setKeyboardAppearance:(unsigned long long)arg1;
- (void)setKeyboardType:(unsigned long long)arg1;
- (void)setRecentInputIdentifier:(id)arg1;
- (void)setReturnKeyType:(unsigned long long)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setSmartDashesEnabled:(bool)arg1;
- (void)setSmartDashesType:(unsigned long long)arg1;
- (void)setSmartInsertDeleteEnabled:(bool)arg1;
- (void)setSmartInsertDeleteType:(unsigned long long)arg1;
- (void)setSmartQuotesEnabled:(bool)arg1;
- (void)setSmartQuotesType:(unsigned long long)arg1;
- (void)setSpellCheckingType:(unsigned long long)arg1;
- (void)setTextContentType:(id)arg1;
- (void)setTextScriptType:(unsigned long long)arg1;
- (bool)smartDashesEnabled;
- (unsigned long long)smartDashesType;
- (bool)smartInsertDeleteEnabled;
- (unsigned long long)smartInsertDeleteType;
- (bool)smartQuotesEnabled;
- (unsigned long long)smartQuotesType;
- (unsigned long long)spellCheckingType;
- (id)textContentType;
- (unsigned long long)textScriptType;
- (unsigned long long)version;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)traitsForUITextInputTraits:(id)arg1;
+ (long long)translateToPublicKeyboardType:(unsigned long long)arg1;
+ (unsigned long long)translateToTextInputAutocapitalizationType:(long long)arg1;
+ (unsigned long long)translateToTextInputAutocorrectionType:(long long)arg1;
+ (unsigned long long)translateToTextInputInlineCompletionType:(long long)arg1;
+ (unsigned long long)translateToTextInputKeyboardAppearance:(long long)arg1;
+ (unsigned long long)translateToTextInputKeyboardType:(long long)arg1;
+ (id)translateToTextInputRecentInputIdentifier:(id)arg1;
+ (unsigned long long)translateToTextInputReturnKeyType:(long long)arg1;
+ (bool)translateToTextInputSmartDashesEnabled:(long long)arg1;
+ (bool)translateToTextInputSmartInsertDeleteEnabled:(long long)arg1;
+ (bool)translateToTextInputSmartQuotesEnabled:(long long)arg1;
+ (unsigned long long)translateToTextInputSpellCheckingType:(long long)arg1;
+ (unsigned long long)translateToTextScriptType:(long long)arg1;

@end
