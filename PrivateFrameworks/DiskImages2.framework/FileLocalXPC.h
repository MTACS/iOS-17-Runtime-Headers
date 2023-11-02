
@interface FileLocalXPC : BackendXPC

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 fileOpenFlags:(int)arg2;

@end
