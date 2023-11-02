
@interface RSSubPointsLUT : NSObject <NSCopying> {
    unsigned long long  _begin;
    float  _camH;
    float  _camW;
    unsigned long long  _end;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _intrinsics;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _pose;
    unsigned long long  _rawSize;
    unsigned long long  _size;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
