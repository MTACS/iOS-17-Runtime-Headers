
@interface REAudioPayload : RESharedResourcePayload {
    NSObject<OS_xpc_object> * _buffer;
    double  _calibrationLevel;
    int  _calibrationMode;
    NSString * _filePath;
    AVAudioFormat * _format;
    unsigned char  _inputMode;
    NSNumber * _length;
    int  _loopCount;
    unsigned long long  _mixGroupID;
    NSString * _mixGroupName;
    int  _normalizationMode;
    float  _referenceLevel;
    bool  _streaming;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *buffer;
@property (nonatomic, readonly) double calibrationLevel;
@property (nonatomic, readonly) int calibrationMode;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) AVAudioFormat *format;
@property (nonatomic, readonly) unsigned char inputMode;
@property (nonatomic, readonly) NSNumber *length;
@property (nonatomic, readonly) int loopCount;
@property (nonatomic, readonly) unsigned long long mixGroupID;
@property (nonatomic, readonly) NSString *mixGroupName;
@property (nonatomic, readonly) int normalizationMode;
@property (nonatomic, readonly) float referenceLevel;
@property (nonatomic, readonly) bool streaming;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buffer;
- (double)calibrationLevel;
- (int)calibrationMode;
- (void)encodeWithCoder:(id)arg1;
- (id)filePath;
- (id)format;
- (id)initWithBuffer:(id)arg1 format:(id)arg2 length:(unsigned int)arg3 inputMode:(unsigned char)arg4 referenceLevel:(float)arg5 loopCount:(int)arg6 mixGroupID:(unsigned long long)arg7 mixGroupName:(id)arg8 streaming:(bool)arg9 normalizationMode:(int)arg10 calibrationMode:(int)arg11 calibrationLevel:(double)arg12;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilePath:(id)arg1 inputMode:(unsigned char)arg2 referenceLevel:(float)arg3 loopCount:(int)arg4 mixGroupID:(unsigned long long)arg5 mixGroupName:(id)arg6 streaming:(bool)arg7 normalizationMode:(int)arg8 calibrationMode:(int)arg9 calibrationLevel:(double)arg10;
- (unsigned char)inputMode;
- (id)length;
- (int)loopCount;
- (unsigned long long)mixGroupID;
- (id)mixGroupName;
- (int)normalizationMode;
- (float)referenceLevel;
- (bool)streaming;

@end
