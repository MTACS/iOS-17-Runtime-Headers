
@interface AWAttentionLostEvent : AWAttentionEvent <NSSecureCoding> {
    id  _associatedObject;
    double  _attentionLostTimeout;
}

@property (nonatomic, readonly) id associatedObject;
@property (nonatomic, readonly) double attentionLostTimeout;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedObject;
- (double)attentionLostTimeout;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 attentionLostTimeout:(double)arg3;
- (void)updateWithConfig:(id)arg1;
- (void)validateMask;

@end
