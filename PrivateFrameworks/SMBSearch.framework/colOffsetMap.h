
@interface colOffsetMap : NSObject {
    NSArray * _lengthOffsets;
    NSArray * _statusOffsets;
    NSArray * _valueOffsets;
}

@property (retain) NSArray *lengthOffsets;
@property (retain) NSArray *statusOffsets;
@property (retain) NSArray *valueOffsets;

- (void).cxx_destruct;
- (id)initWithCtx:(id)arg1;
- (id)lengthOffsets;
- (void)setLengthOffsets:(id)arg1;
- (void)setStatusOffsets:(id)arg1;
- (void)setValueOffsets:(id)arg1;
- (id)statusOffsets;
- (id)valueOffsets;

@end
