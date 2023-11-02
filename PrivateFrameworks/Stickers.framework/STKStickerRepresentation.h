
@interface STKStickerRepresentation : NSObject <NSSecureCoding> {
    void byteCount;
    void data;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identifier;
    void isPreferred;
    void role;
    void size;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  uti;
    void version;
}

@property (nonatomic) long long byteCount;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic) bool isPreferred;
@property (nonatomic, copy) NSString *role;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) UTType *uti;
@property (nonatomic, readonly) long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)byteCount;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPreferred;
- (id)role;
- (void)setByteCount:(long long)arg1;
- (void)setData:(id)arg1;
- (void)setIsPreferred:(bool)arg1;
- (void)setRole:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)uti;
- (long long)version;

@end
