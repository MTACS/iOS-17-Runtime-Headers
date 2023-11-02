
@interface FKTextFeature : NSObject {
    union { 
        int seqInd; 
        int ccInd; 
    }  _backingIndex;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    NSArray * _candidates;
    float  _confidence;
    NSArray * _corners;
    long long  _featureID;
    int  _scale;
    struct FKSession { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; unsigned int x10; BOOL x11[128]; struct vImage_Buffer { void *x_12_1_1; unsigned long long x_12_1_2; unsigned long long x_12_1_3; unsigned long long x_12_1_4; } x12; struct vImage_Buffer { void *x_13_1_1; unsigned long long x_13_1_2; unsigned long long x_13_1_3; unsigned long long x_13_1_4; } x13; struct { /* ? */ } *x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; struct { /* ? */ } *x19; unsigned short *x20; int x21; int x22; struct concomp {} *x23; int x24; int x25; int x26; int x27; int x28; int x29; struct sequence {} *x30; int x31; int x32; int x33; int x34; unsigned char x35; struct recognizer {} *x36; } * _session;
    NSArray * _subFeatures;
    NSString * _text;
    long long  _type;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (readonly) NSArray *candidates;
@property float confidence;
@property (nonatomic, readonly, retain) NSArray *corners;
@property (nonatomic, readonly) long long featureID;
@property (nonatomic, retain) NSArray *subFeatures;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, readonly) long long type;

+ (id)featureFromConcompIndex:(int)arg1 session:(struct FKSession { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; unsigned int x10; BOOL x11[128]; struct vImage_Buffer { void *x_12_1_1; unsigned long long x_12_1_2; unsigned long long x_12_1_3; unsigned long long x_12_1_4; } x12; struct vImage_Buffer { void *x_13_1_1; unsigned long long x_13_1_2; unsigned long long x_13_1_3; unsigned long long x_13_1_4; } x13; struct { /* ? */ } *x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; struct { /* ? */ } *x19; unsigned short *x20; int x21; int x22; struct concomp {} *x23; int x24; int x25; int x26; int x27; int x28; int x29; struct sequence {} *x30; int x31; int x32; int x33; int x34; unsigned char x35; struct recognizer {} *x36; }*)arg2 scaling:(struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; int x3; }*)arg3 type:(long long)arg4 createDiacriticFeatures:(bool)arg5 featureID:(long long*)arg6;
+ (id)featureFromSequenceIndex:(int)arg1 session:(struct FKSession { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; unsigned int x10; BOOL x11[128]; struct vImage_Buffer { void *x_12_1_1; unsigned long long x_12_1_2; unsigned long long x_12_1_3; unsigned long long x_12_1_4; } x12; struct vImage_Buffer { void *x_13_1_1; unsigned long long x_13_1_2; unsigned long long x_13_1_3; unsigned long long x_13_1_4; } x13; struct { /* ? */ } *x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; struct { /* ? */ } *x19; unsigned short *x20; int x21; int x22; struct concomp {} *x23; int x24; int x25; int x26; int x27; int x28; int x29; struct sequence {} *x30; int x31; int x32; int x33; int x34; unsigned char x35; struct recognizer {} *x36; }*)arg2 scaling:(struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; int x3; }*)arg3 createConcompFeatures:(bool)arg4 createDiacriticFeatures:(bool)arg5 featureID:(long long*)arg6;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)candidates;
- (float)confidence;
- (id)corners;
- (void)dealloc;
- (long long)featureID;
- (id)initWithType:(long long)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 corners:(id)arg3 featureID:(long long)arg4 session:(struct FKSession { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; unsigned int x10; BOOL x11[128]; struct vImage_Buffer { void *x_12_1_1; unsigned long long x_12_1_2; unsigned long long x_12_1_3; unsigned long long x_12_1_4; } x12; struct vImage_Buffer { void *x_13_1_1; unsigned long long x_13_1_2; unsigned long long x_13_1_3; unsigned long long x_13_1_4; } x13; struct { /* ? */ } *x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; struct { /* ? */ } *x19; unsigned short *x20; int x21; int x22; struct concomp {} *x23; int x24; int x25; int x26; int x27; int x28; int x29; struct sequence {} *x30; int x31; int x32; int x33; int x34; unsigned char x35; struct recognizer {} *x36; }*)arg5 backingIndex:(union { int x1; int x2; })arg6 scale:(int)arg7;
- (void)setConfidence:(float)arg1;
- (void)setSubFeatures:(id)arg1;
- (void)setText:(id)arg1;
- (id)subFeatures;
- (id)text;
- (long long)type;

@end
