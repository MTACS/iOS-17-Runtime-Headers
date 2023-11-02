
@interface ENAdvertisement : NSObject {
    unsigned char  _counter;
    NSData * _encryptedAEM;
    BOOL  _maxRSSI;
    NSData * _rpi;
    bool  _saturated;
    unsigned short  _scanInterval;
    double  _timestamp;
    BOOL  _typicalRSSI;
}

@property (nonatomic) unsigned char counter;
@property (nonatomic, retain) NSData *encryptedAEM;
@property (nonatomic) BOOL maxRSSI;
@property (nonatomic, retain) NSData *rpi;
@property (nonatomic) bool saturated;
@property (nonatomic) unsigned short scanInterval;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL typicalRSSI;

+ (id)decryptedMetadataForTemporaryExposureKey:(id)arg1 encryptedAEM:(const struct { unsigned char x1[4]; }*)arg2 RPI:(const struct { unsigned char x1[16]; }*)arg3;

- (void).cxx_destruct;
- (void)combineWithAdvertisement:(id)arg1;
- (unsigned char)counter;
- (id)decryptedMetadataForTemporaryExposureKey:(id)arg1;
- (id)description;
- (id)encryptedAEM;
- (id)initWithRPI:(id)arg1 encryptedAEM:(id)arg2 timestamp:(double)arg3 scanInterval:(unsigned short)arg4 typicalRSSI:(BOOL)arg5 maxRSSI:(BOOL)arg6 saturated:(bool)arg7 counter:(unsigned char)arg8;
- (id)initWithStructRepresentation:(struct { struct { unsigned char x_1_1_1[16]; } x1; struct { unsigned char x_2_1_1[4]; } x2; double x3; unsigned int x4; unsigned short x5; unsigned short x6; BOOL x7; BOOL x8; bool x9; unsigned char x10; })arg1;
- (BOOL)maxRSSI;
- (id)rpi;
- (bool)saturated;
- (unsigned short)scanInterval;
- (void)setCounter:(unsigned char)arg1;
- (void)setEncryptedAEM:(id)arg1;
- (void)setMaxRSSI:(BOOL)arg1;
- (void)setRpi:(id)arg1;
- (void)setSaturated:(bool)arg1;
- (void)setScanInterval:(unsigned short)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTypicalRSSI:(BOOL)arg1;
- (struct { struct { unsigned char x_1_1_1[16]; } x1; struct { unsigned char x_2_1_1[4]; } x2; double x3; unsigned int x4; unsigned short x5; unsigned short x6; BOOL x7; BOOL x8; bool x9; unsigned char x10; })structRepresentation;
- (double)timestamp;
- (BOOL)typicalRSSI;

@end
