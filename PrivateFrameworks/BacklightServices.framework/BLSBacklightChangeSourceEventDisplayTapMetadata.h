
@interface BLSBacklightChangeSourceEventDisplayTapMetadata : BLSBacklightChangeSourceEventMetadata {
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } position;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPosition:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })position;

@end
