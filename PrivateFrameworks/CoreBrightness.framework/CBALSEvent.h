
@interface CBALSEvent : CBHIDEvent {
    bool  _colorMitigationTriggered;
    struct { 
        float XYZ[3]; 
        struct { 
            float x; 
            float y; 
        } xy; 
        float CCT1; 
        struct { 
            int orientation; 
            float rawChannels[6]; 
            int nChannels; 
            float brightness; 
        } extra; 
    }  _colorSample;
    float  _confidence;
    struct __IOHIDEvent { } * _event;
    bool  _firstALSSample;
    double  _illuminance;
    float  _integrationTime;
    NSObject<OS_os_log> * _logHandle;
    CBALSNode * _node;
    bool  _obstructed;
    int  _orientation;
    float  _strength;
    bool  _supportColor;
    struct { 
        unsigned int status; 
        unsigned char nChannels; 
        unsigned char orientation; 
        unsigned short brightness; 
        unsigned int integrationTime; 
        unsigned int reportInterval; 
        int gain; 
        float lux; 
        float rawLux; 
        float channelData[6]; 
        float CCT; 
        short AZOffsets[6]; 
        float temperature; 
        unsigned int sensorTimestamp; 
        int sensorType; 
        unsigned short validNSamples; 
        bool asyncMode; 
        unsigned int xtalkEstimate[6]; 
        bool colorCalcOnAOP; 
        float XYZAP[3]; 
        float XYZAOP[3]; 
        float filteredLux; 
        bool filteredLuxSet; 
    }  _vendorData;
}

@property bool colorMitigationTriggered;
@property struct { float x1[3]; struct { float x_2_1_1; float x_2_1_2; } x2; float x3; struct { int x_4_1_1; float x_4_1_2[6]; int x_4_1_3; float x_4_1_4; } x4; } colorSample;
@property float confidence;
@property bool firstALSSample;
@property double illuminance;
@property float integrationTime;
@property bool obstructed;
@property int orientation;
@property float strength;
@property bool supportColor;
@property struct { unsigned int x1; unsigned char x2; unsigned char x3; unsigned short x4; unsigned int x5; unsigned int x6; int x7; float x8; float x9; float x10[6]; float x11; short x12[6]; float x13; unsigned int x14; int x15; unsigned short x16; bool x17; unsigned int x18[6]; bool x19; float x20[3]; float x21[3]; float x22; bool x23; } vendorData;

+ (void)replaceLuxWithFilteredLux:(struct __IOHIDEvent { }*)arg1;

- (bool)colorMitigationTriggered;
- (struct { float x1[3]; struct { float x_2_1_1; float x_2_1_2; } x2; float x3; struct { int x_4_1_1; float x_4_1_2[6]; int x_4_1_3; float x_4_1_4; } x4; })colorSample;
- (long long)compare:(id)arg1;
- (float)confidence;
- (struct { unsigned int x1; unsigned char x2; unsigned char x3; unsigned short x4; unsigned int x5; unsigned int x6; int x7; float x8; float x9; float x10[6]; float x11; short x12[6]; float x13; unsigned int x14; int x15; unsigned short x16; bool x17; unsigned int x18[6]; bool x19; float x20[3]; float x21[3]; float x22; bool x23; })copyVendorDataFromEvent:(struct __IOHIDEvent { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)firstALSSample;
- (int)getServiceOrientation:(struct __IOHIDServiceClient { }*)arg1;
- (double)illuminance;
- (id)initWithHIDEvent:(struct __IOHIDEvent { }*)arg1 andNode:(id)arg2;
- (id)initWithHIDEvent:(struct __IOHIDEvent { }*)arg1 andService:(struct __IOHIDServiceClient { }*)arg2;
- (float)integrationTime;
- (bool)obstructed;
- (int)orientation;
- (void)setColorMitigationTriggered:(bool)arg1;
- (void)setColorSample:(struct { float x1[3]; struct { float x_2_1_1; float x_2_1_2; } x2; float x3; struct { int x_4_1_1; float x_4_1_2[6]; int x_4_1_3; float x_4_1_4; } x4; })arg1;
- (void)setConfidence:(float)arg1;
- (void)setFirstALSSample:(bool)arg1;
- (void)setIlluminance:(double)arg1;
- (void)setIntegrationTime:(float)arg1;
- (void)setObstructed:(bool)arg1;
- (void)setOrientation:(int)arg1;
- (void)setStrength:(float)arg1;
- (void)setSupportColor:(bool)arg1;
- (void)setVendorData:(struct { unsigned int x1; unsigned char x2; unsigned char x3; unsigned short x4; unsigned int x5; unsigned int x6; int x7; float x8; float x9; float x10[6]; float x11; short x12[6]; float x13; unsigned int x14; int x15; unsigned short x16; bool x17; unsigned int x18[6]; bool x19; float x20[3]; float x21[3]; float x22; bool x23; })arg1;
- (float)strength;
- (bool)supportColor;
- (struct { unsigned int x1; unsigned char x2; unsigned char x3; unsigned short x4; unsigned int x5; unsigned int x6; int x7; float x8; float x9; float x10[6]; float x11; short x12[6]; float x13; unsigned int x14; int x15; unsigned short x16; bool x17; unsigned int x18[6]; bool x19; float x20[3]; float x21[3]; float x22; bool x23; })vendorData;

@end
