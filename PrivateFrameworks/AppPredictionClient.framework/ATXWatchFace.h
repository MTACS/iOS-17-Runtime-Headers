
@interface ATXWatchFace : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _complications;
    bool  _selected;
    long long  _style;
}

@property (nonatomic, readonly, copy) NSArray *complications;
@property (getter=isSelected, nonatomic, readonly) bool selected;
@property (nonatomic, readonly) long long style;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)complications;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 complications:(id)arg2 selected:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXWatchFace:(id)arg1;
- (bool)isSelected;
- (long long)style;

@end
