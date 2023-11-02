
@interface ARJasperData : NSObject <ARData> {
    struct __CVBuffer { } * _dataBuffer;
    double  _timestamp;
}

@property (nonatomic) struct __CVBuffer { }*dataBuffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

- (struct __CVBuffer { }*)dataBuffer;
- (void)dealloc;
- (id)initWithBuffer:(struct __CVBuffer { }*)arg1 timestamp:(double)arg2;
- (void)setDataBuffer:(struct __CVBuffer { }*)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
