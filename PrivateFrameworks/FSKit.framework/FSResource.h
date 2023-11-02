
@interface FSResource : NSObject <NSSecureCoding> {
    bool  _revoked;
}

@property (nonatomic, readonly) int kind;
@property (setter=revoke:, nonatomic) bool revoked;

+ (id)dynamicCast:(id)arg1;
+ (bool)supportsSecureCoding;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)getResourceID;
- (id)initWithCoder:(id)arg1;
- (int)kind;
- (void)revoke:(bool)arg1;
- (bool)revoked;

@end
