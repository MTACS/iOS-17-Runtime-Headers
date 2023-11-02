
@interface MFPFont : NSObject {
    unsigned int  mFlags;
    NSString * mName;
    float  mSize;
    int  mUnit;
}

- (void).cxx_destruct;
- (struct __CTFont { }*)createCTFontWithGraphics:(id)arg1;
- (unsigned int)flags;
- (id)name;
- (void)setFlags:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setSize:(float)arg1;
- (void)setUnit:(int)arg1;
- (float)size;
- (int)unit;

@end
