
@interface ATXScoreNormalizationParameters : NSObject {
    NSNumber * _bufferSize;
}

@property (nonatomic, readonly) NSNumber *bufferSize;

- (void).cxx_destruct;
- (id)bufferSize;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBufferSize:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXScoreNormalizationParameters:(id)arg1;

@end
