
@interface CTRatSelection : NSObject <NSCopying, NSSecureCoding> {
    unsigned char  _mask;
    NSString * _preferred;
    NSString * _selection;
}

@property (nonatomic) unsigned char mask;
@property (nonatomic, retain) NSString *preferred;
@property (nonatomic, retain) NSString *selection;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned char)mask;
- (id)preferred;
- (id)selection;
- (void)setMask:(unsigned char)arg1;
- (void)setPreferred:(id)arg1;
- (void)setSelection:(id)arg1;

@end
