
@interface SBSRelativeDisplayArrangement : NSObject <NSSecureCoding> {
    NSString * _displayIdentifier;
    unsigned int  _edge;
    double  _offset;
}

@property (nonatomic, readonly, copy) NSString *displayIdentifier;
@property (nonatomic, readonly) unsigned int edge;
@property (nonatomic, readonly) double offset;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)displayIdentifier;
- (unsigned int)edge;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayIdentifier:(id)arg1 edge:(unsigned int)arg2 offset:(double)arg3;
- (double)offset;

@end
