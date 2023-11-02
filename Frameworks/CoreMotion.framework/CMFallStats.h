
@interface CMFallStats : NSObject <NSSecureCoding, SRSampleExporting, SRSampling> {
    NSData * _data;
    int  _fallType;
    double  _iOStime;
    bool  _isNearFall;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int fallType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double iOStime;
@property (nonatomic, readonly) bool isNearFall;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void)_decodeMeta;
- (id)binarySampleRepresentation;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)fallType;
- (double)iOStime;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithBufferAndLength:(char *)arg1 length:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (bool)isNearFall;
- (id)itemsIterator;
- (id)sr_exportRepresentationEnumerator;

@end
