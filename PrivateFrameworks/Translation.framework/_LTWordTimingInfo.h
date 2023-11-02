
@interface _LTWordTimingInfo : NSObject <NSSecureCoding> {
    unsigned int  _length;
    unsigned int  _offset;
    unsigned int  _sampleIndex;
    double  _timestamp;
    NSString * _word;
}

@property (nonatomic) unsigned int length;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int sampleIndex;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) NSString *word;

// Image: /System/Library/PrivateFrameworks/Translation.framework/Translation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)length;
- (unsigned int)offset;
- (unsigned int)sampleIndex;
- (void)setLength:(unsigned int)arg1;
- (void)setOffset:(unsigned int)arg1;
- (void)setSampleIndex:(unsigned int)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setWord:(id)arg1;
- (double)timestamp;
- (id)word;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

+ (id)wordTimingInfoFromArray:(id)arg1;

- (id)initWithFTWordTimingInfo:(id)arg1;

@end
