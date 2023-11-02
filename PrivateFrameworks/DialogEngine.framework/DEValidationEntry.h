
@interface DEValidationEntry : NSObject {
    NSString * _filename;
    NSNumber * _lineNumber;
    NSString * _text;
    NSString * _textWithLineNumber;
}

@property (nonatomic, retain) NSString *filename;
@property (nonatomic, retain) NSNumber *lineNumber;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) NSString *textWithLineNumber;

- (void).cxx_destruct;
- (id)filename;
- (id)lineNumber;
- (void)setFilename:(id)arg1;
- (void)setLineNumber:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextWithLineNumber:(id)arg1;
- (id)text;
- (id)textWithLineNumber;

@end
