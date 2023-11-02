
@interface UIKeyboardUISnapshot : NSObject <NSSecureCoding> {
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    unsigned int  _slotID;
}

@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) unsigned int slotID;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSlotID:(unsigned int)arg1;
- (struct CGSize { double x1; double x2; })size;
- (unsigned int)slotID;

@end
