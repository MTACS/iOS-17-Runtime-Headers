
@interface MBSizeInfo : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _size;
    unsigned long long  _state;
}

@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long state;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)size;
- (unsigned long long)state;

@end