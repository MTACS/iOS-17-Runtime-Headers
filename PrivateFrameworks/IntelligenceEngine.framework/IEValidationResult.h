
@interface IEValidationResult : NSObject {
    NSString * _code;
    NSString * _filename;
    int  _lineNumber;
    NSString * _text;
    NSString * _type;
}

@property (nonatomic, retain) NSString *code;
@property (nonatomic, retain) NSString *filename;
@property (readonly) unsigned long long hash;
@property (nonatomic) int lineNumber;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) NSString *type;

- (void).cxx_destruct;
- (id)code;
- (id)filename;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)lineNumber;
- (void)setCode:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setLineNumber:(int)arg1;
- (void)setText:(id)arg1;
- (void)setType:(id)arg1;
- (id)text;
- (id)type;

@end
