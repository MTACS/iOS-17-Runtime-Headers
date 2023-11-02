
@interface CADisplayMode : NSObject {
    struct CADisplayModePriv { struct Mode { union { struct { unsigned int x_1_3_1 : 14; unsigned int x_1_3_2 : 14; unsigned int x_1_3_3 : 1; unsigned int x_1_3_4 : 25; unsigned int x_1_3_5 : 1; unsigned int x_1_3_6 : 5; unsigned int x_1_3_7 : 2; unsigned int x_1_3_8 : 1; unsigned int x_1_3_9 : 1; } x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; } x1; id x2; unsigned long long x3; unsigned long long x4; unsigned int x5; id x6; } * _priv;
}

@property (nonatomic, readonly) unsigned long long bitDepth;
@property (nonatomic, readonly, copy) NSString *colorGamut;
@property (nonatomic, readonly, copy) NSString *colorMode;
@property (nonatomic, readonly) bool colorModeIsYCbCr;
@property (nonatomic, readonly, copy) NSString *hdrMode;
@property (nonatomic, readonly) unsigned long long height;
@property (getter=isHighBandwidth, nonatomic, readonly) bool highBandwidth;
@property (nonatomic, readonly) unsigned long long internalRepresentation;
@property (nonatomic, readonly) bool isVRR;
@property (nonatomic, readonly) bool isVirtual;
@property (nonatomic, readonly) double pixelAspectRatio;
@property (nonatomic, readonly) unsigned long long preferredScale;
@property (nonatomic, readonly) double refreshRate;
@property (nonatomic, readonly) unsigned long long width;

+ (id)_displayModeWithMode:(struct Mode { union { struct { unsigned int x_1_2_1 : 14; unsigned int x_1_2_2 : 14; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 25; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 5; unsigned int x_1_2_7 : 2; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; } x_1_1_1; unsigned long long x_1_1_2; } x1; })arg1 display:(id)arg2 rates:(id)arg3;
+ (id)displayModeWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 refreshRate:(double)arg3;
+ (id)displayModeWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 refreshRate:(double)arg3 isVRR:(bool)arg4;

- (id)_display;
- (id)_initWithMode:(struct Mode { union { struct { unsigned int x_1_2_1 : 14; unsigned int x_1_2_2 : 14; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 25; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 5; unsigned int x_1_2_7 : 2; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; } x_1_1_1; unsigned long long x_1_1_2; } x1; })arg1 display:(id)arg2 rates:(id)arg3;
- (struct Mode { union { struct { unsigned int x_1_2_1 : 14; unsigned int x_1_2_2 : 14; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 25; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 5; unsigned int x_1_2_7 : 2; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; } x_1_1_1; unsigned long long x_1_1_2; } x1; })_mode;
- (void)_setPreferredUIScale:(unsigned int)arg1;
- (void)_setWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (unsigned long long)bitDepth;
- (id)colorGamut;
- (id)colorMode;
- (bool)colorModeIsYCbCr;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)hdrMode;
- (unsigned long long)height;
- (unsigned long long)internalRepresentation;
- (bool)isEqual:(id)arg1;
- (bool)isHighBandwidth;
- (bool)isVRR;
- (bool)isVirtual;
- (double)pixelAspectRatio;
- (unsigned long long)preferredScale;
- (double)refreshRate;
- (unsigned long long)width;

@end
