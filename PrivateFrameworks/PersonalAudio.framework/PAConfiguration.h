
@interface PAConfiguration : NSObject <NSSecureCoding> {
    NSDictionary * _audiogramSettings;
    unsigned long long  _level;
    NSDictionary * _preset;
    NSDictionary * _presetAdjustments;
    unsigned long long  _shape;
}

@property (nonatomic, retain) NSDictionary *audiogramSettings;
@property (nonatomic) unsigned long long level;
@property (nonatomic, retain) NSDictionary *preset;
@property (nonatomic, retain) NSDictionary *presetAdjustments;
@property (nonatomic) unsigned long long shape;

+ (id)configurationFromType:(unsigned long long)arg1;
+ (id)configurationWithAudiogram:(id)arg1;
+ (id)configurationWithLevel:(unsigned long long)arg1 andShape:(unsigned long long)arg2;
+ (id)configurationWithPreset:(id)arg1 andAdjustments:(id)arg2;
+ (id)configurationWithRawAdjustment:(unsigned long long)arg1;
+ (id)dataFromPreset:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; }*)arg1;
+ (id)paramDataWithValue:(float)arg1 andOffset:(int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)audiogramSettings;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)level;
- (id)preset;
- (id)presetAdjustments;
- (struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; }*)readSettingsFromPreset:(id)arg1;
- (void)setAudiogramSettings:(id)arg1;
- (void)setLevel:(unsigned long long)arg1;
- (void)setPreset:(id)arg1;
- (void)setPresetAdjustments:(id)arg1;
- (void)setShape:(unsigned long long)arg1;
- (struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; }*)settingsFromConfiguration:(bool)arg1;
- (unsigned long long)shape;
- (struct { float x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; float x_2_1_10; float x_2_1_11; float x_2_1_12; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; float x_3_1_5; float x_3_1_6; float x_3_1_7; float x_3_1_8; float x_3_1_9; float x_3_1_10; float x_3_1_11; float x_3_1_12; } x3; }*)transparencySettingsForAddress:(id)arg1;

@end
