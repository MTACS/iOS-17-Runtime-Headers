
@interface BKSHIDEventKeyboardAttributes : BKSHIDEventBaseAttributes {
    unsigned int  _GSModifierState;
}

@property (nonatomic) unsigned int GSModifierState;

+ (id)protobufSchema;

- (unsigned int)GSModifierState;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (void)setGSModifierState:(unsigned int)arg1;

@end
