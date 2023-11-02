
@interface ICSearchUserInput : NSObject <NSCopying> {
    bool  _isEmpty;
    NSString * _keyboardLanguage;
    NSString * _searchString;
    NSArray * _tokens;
}

@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly, copy) NSString *keyboardLanguage;
@property (nonatomic, readonly, copy) NSString *searchString;
@property (nonatomic, readonly) NSArray *tokens;

+ (id)emptyInput;

- (void).cxx_destruct;
- (void)_configureEmptyInput;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithSearchString:(id)arg1 tokens:(id)arg2 keyboardLanguage:(id)arg3;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)keyboardLanguage;
- (id)searchString;
- (id)tokens;

@end
