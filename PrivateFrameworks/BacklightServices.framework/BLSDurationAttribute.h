
@interface BLSDurationAttribute : BLSAttribute <BSXPCCoding> {
    double  _duration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cancelAfterInterval:(double)arg1;
+ (bool)supportsSecureCoding;
+ (id)timeoutAfterInterval:(double)arg1;
+ (id)warnAfterInterval:(double)arg1;

- (bool)canBePaused;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDuration:(double)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
