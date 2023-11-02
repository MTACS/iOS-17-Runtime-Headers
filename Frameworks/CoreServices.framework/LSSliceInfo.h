
@interface LSSliceInfo : NSObject <NSSecureCoding> {
    int  _subtype;
    int  _type;
}

@property (nonatomic, readonly) int subtype;
@property (nonatomic, readonly) int type;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSliceDescData:(struct LSSliceData { int x1; int x2; })arg1;
- (id)initWithType:(int)arg1 subtype:(int)arg2;
- (bool)isEqual:(id)arg1;
- (struct LSSliceData { int x1; int x2; })sliceValue;
- (int)subtype;
- (int)type;

@end
