
@interface AWAttentionEvent : NSObject <NSSecureCoding> {
    unsigned long long  _eventMask;
    id  _tag;
    unsigned long long  _tagIndex;
    double  _timestamp;
}

@property (nonatomic, readonly) unsigned long long eventMask;
@property (nonatomic, readonly) id tag;
@property (nonatomic, readonly) double timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eventMask;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 eventMask:(unsigned long long)arg3;
- (id)tag;
- (unsigned long long)tagIndex;
- (double)timestamp;
- (void)updateWithConfig:(id)arg1;
- (void)validateMask;

@end
