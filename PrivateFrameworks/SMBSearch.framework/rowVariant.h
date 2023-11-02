
@interface rowVariant : NSObject {
    int  _int4Val;
    unsigned char  _reserved1;
    unsigned int  _reserved2;
    NSString * _strValue;
    struct timespec { 
        long long tv_sec; 
        long long tv_nsec; 
    }  _timeSpec;
    unsigned int  _uint4Val;
    unsigned long long  _uint64Val;
    short  _vType;
    NSMutableArray * _vector;
    unsigned long long  _vectorCount;
}

@property int int4Val;
@property unsigned char reserved1;
@property unsigned int reserved2;
@property (retain) NSString *strValue;
@property struct timespec { long long x1; long long x2; } timeSpec;
@property unsigned int uint4Val;
@property unsigned long long uint64Val;
@property short vType;
@property (retain) NSMutableArray *vector;
@property unsigned long long vectorCount;

- (void).cxx_destruct;
- (int)decodeBuffer:(id)arg1 BaseOffset:(unsigned int)arg2 RowStart:(unsigned int)arg3 ValueOffset:(unsigned int)arg4 ValueLen:(unsigned int)arg5 Use64bit:(bool)arg6;
- (id)init;
- (int)int4Val;
- (unsigned char)reserved1;
- (unsigned int)reserved2;
- (void)setInt4Val:(int)arg1;
- (void)setReserved1:(unsigned char)arg1;
- (void)setReserved2:(unsigned int)arg1;
- (void)setStrValue:(id)arg1;
- (void)setTimeSpec:(struct timespec { long long x1; long long x2; })arg1;
- (void)setUint4Val:(unsigned int)arg1;
- (void)setUint64Val:(unsigned long long)arg1;
- (void)setVType:(short)arg1;
- (void)setVector:(id)arg1;
- (void)setVectorCount:(unsigned long long)arg1;
- (id)strValue;
- (struct timespec { long long x1; long long x2; })timeSpec;
- (unsigned int)uint4Val;
- (unsigned long long)uint64Val;
- (int)utf16StrLen:(id)arg1 Offset:(unsigned long long)arg2 Result:(unsigned int*)arg3;
- (short)vType;
- (id)vector;
- (unsigned long long)vectorCount;

@end
