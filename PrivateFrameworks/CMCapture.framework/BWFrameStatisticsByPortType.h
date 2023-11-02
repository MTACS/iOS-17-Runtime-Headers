
@interface BWFrameStatisticsByPortType : NSObject <NSFastEnumeration, NSSecureCoding> {
    bool  _autoFocusRecommendedMasterPortTypeEnabled;
    unsigned long long  _frameCount;
    struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; float x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; float x8; float x9; double x10; unsigned int x11; unsigned int x12; unsigned int x13; float x14; float x15; float x16; double x17; unsigned int x18; unsigned int x19; unsigned int x20; bool x21; bool x22; bool x23; int x24; bool x25; float x26; int x27; bool x28; int x29; int x30; int x31; int x32; int x33; int x34; int x35; int x36; float x37; id x38; unsigned int x39; float x40; int x41; bool x42; bool x43; unsigned short x44; unsigned short x45; unsigned short x46; unsigned short x47; unsigned short x48; unsigned short x49; unsigned short x50; unsigned short x51; unsigned short x52; unsigned int x53; unsigned int x54; } * _frameStatisticsStoragesForPortTypes;
    NSDictionary * _portTypeToFrameStatistics;
    NSArray * _portTypes;
    unsigned int  _qsumConversionGain;
    unsigned int  _qsumReadNoise1x;
    unsigned int  _qsumReadNoise8x;
}

@property (nonatomic, readonly) unsigned long long frameCount;
@property (nonatomic, readonly) NSArray *portTypes;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void)_setFrameCount:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)frameCount;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPortTypes:(id)arg1;
- (id)initWithPortTypes:(id)arg1 autoFocusRecommendedMasterPortTypeEnabled:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)portTypes;
- (void)reset;
- (void)updateWithFrameMetadata:(id)arg1 updateFocusDistance:(bool)arg2;

@end
