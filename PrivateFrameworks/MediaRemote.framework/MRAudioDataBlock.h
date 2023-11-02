
@interface MRAudioDataBlock : NSObject <NSMutableCopying> {
    MRAudioBuffer * _buffer;
    float  _gain;
    struct { 
        double timestamp; 
        double sampleRate; 
    }  _time;
}

@property (nonatomic, readonly) MRAudioBuffer *buffer;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) float gain;
@property (nonatomic, readonly) _MRAudioDataBlockProtobuf *protobuf;
@property (nonatomic, readonly) struct { double x1; double x2; } time;

- (void).cxx_destruct;
- (id)_copyWithZone:(struct _NSZone { }*)arg1 usingConcreteClass:(Class)arg2;
- (void)_parseBuffer:(id)arg1;
- (void)_parseGain:(id)arg1;
- (void)_parseTimestamp:(id)arg1;
- (id)buffer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (float)gain;
- (id)initWithData:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)protobuf;
- (struct { double x1; double x2; })time;

@end
