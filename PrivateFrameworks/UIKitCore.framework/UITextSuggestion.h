
@interface UITextSuggestion : NSObject <NSCopying, NSSecureCoding> {
    bool  _displayStylePlain;
    NSString * _displayText;
    NSString * _headerText;
    UIImage * _image;
    NSString * _inputText;
    NSString * _searchText;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) TIKeyboardCandidate *_keyboardCandidate;
@property (nonatomic) bool displayStylePlain;
@property (nonatomic, copy) NSString *displayText;
@property (nonatomic, copy) NSString *headerText;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, copy) NSString *inputText;
@property (nonatomic, copy) NSString *searchText;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)classFallbacksForKeyedArchiver;
+ (id)decodeTextSuggestions:(id)arg1;
+ (id)encodeTextSuggestions:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)textSuggestionWithInputText:(id)arg1;
+ (id)textSuggestionWithInputText:(id)arg1 searchText:(id)arg2;

- (void).cxx_destruct;
- (id)_keyboardCandidate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)displayStylePlain;
- (id)displayText;
- (void)encodeWithCoder:(id)arg1;
- (id)headerText;
- (id)image;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputText:(id)arg1 searchText:(id)arg2 displayText:(id)arg3 headerText:(id)arg4;
- (id)inputText;
- (id)searchText;
- (void)setDisplayStylePlain:(bool)arg1;
- (void)setDisplayText:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setInputText:(id)arg1;
- (void)setSearchText:(id)arg1;
- (id)uuid;

@end
