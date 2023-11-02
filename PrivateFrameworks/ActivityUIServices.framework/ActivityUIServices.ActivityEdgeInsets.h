
@interface ActivityUIServices.ActivityEdgeInsets : NSObject <BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    void bottom;
    void leading;
    void top;
    void trailing;
}

@property (nonatomic) double bottom;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic) double leading;
@property (nonatomic) double top;
@property (nonatomic) double trailing;

+ (bool)supportsSecureCoding;

- (double)bottom;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTop:(double)arg1 leading:(double)arg2 bottom:(double)arg3 trailing:(double)arg4;
- (bool)isEqual:(id)arg1;
- (double)leading;
- (void)setBottom:(double)arg1;
- (void)setLeading:(double)arg1;
- (void)setTop:(double)arg1;
- (void)setTrailing:(double)arg1;
- (double)top;
- (double)trailing;

@end
