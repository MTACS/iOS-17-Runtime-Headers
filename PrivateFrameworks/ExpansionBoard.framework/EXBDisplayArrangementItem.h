
@interface EXBDisplayArrangementItem : NSObject <BSDescriptionStreamable, NSCopying, NSSecureCoding> {
    unsigned int  _edge;
    double  _offset;
    FBSDisplayIdentity * _relativeDisplayIdentity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int edge;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double offset;
@property (nonatomic, readonly) FBSDisplayIdentity *relativeDisplayIdentity;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)edge;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRelativeDisplayIdentity:(id)arg1 edge:(unsigned int)arg2 offset:(double)arg3;
- (bool)isEqual:(id)arg1;
- (double)offset;
- (id)relativeDisplayIdentity;

@end
