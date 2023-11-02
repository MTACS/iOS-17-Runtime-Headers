
@interface CBAODFlipBookWrapper : NSObject {
    NSMutableArray * _flipBookData;
    struct { 
        unsigned char version; 
        unsigned int sizeOfHeader; 
        unsigned int sizeOfEntry; 
        unsigned int numberOfUpdates; 
        unsigned short frequency; 
        float length; 
        float ambient; 
    }  _header;
    struct { 
        float brightness; 
        float brightnessLimit; 
        float pccFactor; 
        float twilightStrength; 
        float twilightLux; 
        float ammoliteStrength; 
        float ammoliteLux; 
        struct { 
            float matrix[3][3]; 
            struct { 
                float x; 
                float y; 
            } xy; 
            float Y; 
        } whitepoint; 
    }  _origin;
    double  _submissionTimestamp;
}

@property (nonatomic, readonly) unsigned long long entryCount;
@property (nonatomic, readonly) struct { unsigned char x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; float x6; float x7; } header;
@property (nonatomic, readonly) struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct { float x_8_1_1[3][3]; struct { float x_2_2_1; float x_2_2_2; } x_8_1_2; float x_8_1_3; } x8; } origin;
@property (nonatomic) double submissionTimestamp;

- (void)appendFlipBookEntry:(struct { unsigned int x1; bool x2; float x3; bool x4; float x5[3][3]; bool x6; float x7; bool x8; float x9; bool x10; float x11; float x12; bool x13; float x14; float x15; unsigned char x16[5]; }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)entryCount;
- (bool)getEntry:(struct { unsigned int x1; bool x2; float x3; bool x4; float x5[3][3]; bool x6; float x7; bool x8; float x9; bool x10; float x11; float x12; bool x13; float x14; float x15; unsigned char x16[5]; }*)arg1 forID:(long long)arg2;
- (struct { unsigned char x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; float x6; float x7; })header;
- (id)initWithHeader:(struct { unsigned char x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; float x6; float x7; })arg1 andOrigin:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct { float x_8_1_1[3][3]; struct { float x_2_2_1; float x_2_2_2; } x_8_1_2; float x_8_1_3; } x8; })arg2;
- (bool)isValidEntryID:(long long)arg1;
- (id)newFlipBookData;
- (struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct { float x_8_1_1[3][3]; struct { float x_2_2_1; float x_2_2_2; } x_8_1_2; float x_8_1_3; } x8; })origin;
- (void)setSubmissionTimestamp:(double)arg1;
- (double)submissionTimestamp;

@end
