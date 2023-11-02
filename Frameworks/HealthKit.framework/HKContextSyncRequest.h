
@interface HKContextSyncRequest : NSObject <NSCopying, NSSecureCoding> {
    bool  _pull;
    bool  _push;
}

@property (readonly) bool pull;
@property (readonly) bool push;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPush:(bool)arg1 pull:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (id)mergeWithRequest:(id)arg1;
- (bool)pull;
- (bool)push;

@end
