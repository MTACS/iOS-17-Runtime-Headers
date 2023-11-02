
@interface ATXScoreNormalizationModel : NSObject <NSCopying, NSSecureCoding> {
    int  _bufferHead;
    int  _bufferSize;
    NSMutableArray * _circularBuffer;
    bool  _isBufferSorted;
    ATXScoreNormalizationParameters * _parameters;
}

@property int bufferHead;
@property int bufferSize;
@property (nonatomic, retain) NSMutableArray *circularBuffer;
@property (nonatomic) bool isBufferSorted;
@property (nonatomic, retain) ATXScoreNormalizationParameters *parameters;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addScore:(id)arg1;
- (int)bufferHead;
- (int)bufferSize;
- (id)circularBuffer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getStateReadyForNormalization;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithParameters:(id)arg1;
- (id)initWithParameters:(id)arg1 circularBuffer:(id)arg2 bufferHead:(int)arg3 isBufferSorted:(bool)arg4;
- (bool)isBufferSorted;
- (id)normalizeScore:(id)arg1;
- (id)parameters;
- (void)resetBuffer;
- (void)setBufferHead:(int)arg1;
- (void)setBufferSize:(int)arg1;
- (void)setCircularBuffer:(id)arg1;
- (void)setIsBufferSorted:(bool)arg1;
- (void)setParameters:(id)arg1;

@end
