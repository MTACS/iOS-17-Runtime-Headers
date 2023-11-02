
@interface CTStewieSupport : NSObject <NSCopying, NSSecureCoding> {
    bool  _hwSupport;
    bool  _status;
}

@property (nonatomic) bool hwSupport;
@property (nonatomic) bool status;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hwSupport;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSupport:(id)arg1;
- (void)setHwSupport:(bool)arg1;
- (void)setStatus:(bool)arg1;
- (bool)status;

@end
