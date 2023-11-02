
@interface BKSDisplayArrangementItem : NSObject <NSSecureCoding> {
    NSString * _displayUUID;
    unsigned int  _edge;
    double  _offset;
    NSString * _relativeDisplayUUID;
}

@property (nonatomic, readonly, copy) NSString *displayUUID;
@property (nonatomic, readonly) unsigned int edge;
@property (nonatomic, readonly) double offset;
@property (nonatomic, readonly, copy) NSString *relativeDisplayUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)description;
- (id)displayUUID;
- (unsigned int)edge;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayUUID:(id)arg1 relativeToDisplayUUID:(id)arg2 alongEdge:(unsigned int)arg3 atOffset:(double)arg4;
- (bool)isEqual:(id)arg1;
- (double)offset;
- (id)relativeDisplayUUID;

@end
