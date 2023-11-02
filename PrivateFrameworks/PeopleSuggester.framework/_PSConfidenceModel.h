
@interface _PSConfidenceModel : NSObject <NSCopying, NSSecureCoding> {
    int  _bufferHead;
    int  _bufferSize;
    NSMutableArray * _circularBuffer;
    int  _minimumInstanceCount;
    double  _sum;
}

@property int bufferHead;
@property int bufferSize;
@property (nonatomic, retain) NSMutableArray *circularBuffer;
@property int minimumInstanceCount;
@property double sum;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
- (int)bufferHead;
- (int)bufferSize;
- (id)circularBuffer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)getConfidence;
- (id)initWithBufferSize:(int)arg1 minimumInstanceCount:(int)arg2;
- (id)initWithBufferSize:(int)arg1 sum:(double)arg2 circularBuffer:(id)arg3 bufferHead:(int)arg4;
- (id)initWithCoder:(id)arg1;
- (int)minimumInstanceCount;
- (void)resetBuffer;
- (void)setBufferHead:(int)arg1;
- (void)setBufferSize:(int)arg1;
- (void)setCircularBuffer:(id)arg1;
- (void)setMinimumInstanceCount:(int)arg1;
- (void)setSum:(double)arg1;
- (double)sum;

@end
