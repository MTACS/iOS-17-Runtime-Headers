
@interface CSMyriadPHashFactors : NSObject {
    unsigned long long  _absTime;
    unsigned char  _confidence;
    unsigned char  _frac;
    unsigned char  _goodness;
    unsigned short  _hashValue;
}

@property (nonatomic, readonly) unsigned long long absTime;
@property (nonatomic, readonly) unsigned char confidence;
@property (nonatomic, readonly) unsigned char frac;
@property (nonatomic, readonly) unsigned char goodness;
@property (nonatomic, readonly) unsigned short hashValue;

- (unsigned long long)absTime;
- (unsigned char)confidence;
- (unsigned char)frac;
- (unsigned char)goodness;
- (unsigned short)hashValue;
- (id)initWithHash:(unsigned short)arg1 goodness:(unsigned char)arg2 confidence:(unsigned char)arg3 absTime:(unsigned long long)arg4 frac:(unsigned char)arg5;

@end
