
@interface BRLTBrailleChar : NSObject <NSCopying> {
    unsigned char  _bits;
}

@property (readonly) unsigned char bits;
@property bool dot1;
@property bool dot2;
@property bool dot3;
@property bool dot4;
@property bool dot5;
@property bool dot6;
@property bool dot7;
@property bool dot8;
@property (readonly) NSString *unicode;

+ (id)charWithBits:(unsigned char)arg1;
+ (id)charWithBrf:(id)arg1;
+ (id)charWithUnichar:(unsigned short)arg1;
+ (id)charWithUnicode:(id)arg1;

- (bool)_dotUp:(int)arg1;
- (void)_setDot:(int)arg1 up:(bool)arg2;
- (unsigned char)bits;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)dot1;
- (bool)dot2;
- (bool)dot3;
- (bool)dot4;
- (bool)dot5;
- (bool)dot6;
- (bool)dot7;
- (bool)dot8;
- (unsigned long long)hash;
- (id)initWithBits:(unsigned char)arg1;
- (id)initWithBrf:(id)arg1;
- (id)initWithUnichar:(unsigned short)arg1;
- (id)initWithUnicode:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBrailleChar:(id)arg1;
- (void)setDot1:(bool)arg1;
- (void)setDot2:(bool)arg1;
- (void)setDot3:(bool)arg1;
- (void)setDot4:(bool)arg1;
- (void)setDot5:(bool)arg1;
- (void)setDot6:(bool)arg1;
- (void)setDot7:(bool)arg1;
- (void)setDot8:(bool)arg1;
- (id)unicode;

@end
