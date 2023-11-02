
@interface GTCallstackFrame : NSObject <NSSecureCoding> {
    unsigned int  _column;
    NSURL * _file;
    NSString * _functionName;
    unsigned int  _line;
}

@property (nonatomic) unsigned int column;
@property (nonatomic, copy) NSURL *file;
@property (nonatomic, copy) NSString *functionName;
@property (nonatomic) unsigned int line;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)column;
- (void)encodeWithCoder:(id)arg1;
- (id)file;
- (id)functionName;
- (id)initWithCoder:(id)arg1;
- (unsigned int)line;
- (void)setColumn:(unsigned int)arg1;
- (void)setFile:(id)arg1;
- (void)setFunctionName:(id)arg1;
- (void)setLine:(unsigned int)arg1;

@end
