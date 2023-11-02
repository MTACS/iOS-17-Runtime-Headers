
@interface RTCSecureHierarchyToken : NSObject <NSCoding, NSSecureCoding> {
    int  _level;
    NSString * _token;
}

@property (nonatomic) int level;
@property (nonatomic, copy) NSString *token;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithToken:(id)arg1 level:(int)arg2;
- (int)level;
- (void)setLevel:(int)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
