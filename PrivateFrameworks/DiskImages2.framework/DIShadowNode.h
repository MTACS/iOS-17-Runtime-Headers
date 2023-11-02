
@interface DIShadowNode : NSObject <NSCoding, NSSecureCoding> {
    DIURL * _URL;
    FileLocalXPC * _fileBackend;
    bool  _isCache;
}

@property (nonatomic, readonly) DIURL *URL;
@property (nonatomic, readonly) FileLocalXPC *fileBackend;
@property (nonatomic, readonly) bool isCache;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (void)createBackendWithFlags:(int)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileBackend;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 isCache:(bool)arg2;
- (bool)isCache;
- (bool)isEqual:(id)arg1;

@end
