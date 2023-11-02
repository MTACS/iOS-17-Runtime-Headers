
@interface GTReplayResponseStream : GTReplayResponse <NSSecureCoding> {
    unsigned int  _state;
}

@property (nonatomic) unsigned int state;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(unsigned int)arg1;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;

@end
