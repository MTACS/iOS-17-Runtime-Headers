
@interface UILexiconEntry : NSObject <NSCopying> {
    NSString * _documentText;
    NSString * _userInput;
}

@property (nonatomic, readonly) NSString *documentText;
@property (nonatomic, readonly) NSString *userInput;

+ (id)_entryWithTILexiconEntry:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)documentText;
- (bool)isEqual:(id)arg1;
- (id)userInput;

@end
