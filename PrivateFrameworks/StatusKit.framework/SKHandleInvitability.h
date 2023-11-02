
@interface SKHandleInvitability : NSObject <NSSecureCoding> {
    bool  _isInvitable;
    bool  _wasRemoved;
}

@property (nonatomic, readonly) bool isInvitable;
@property (nonatomic, readonly) bool wasRemoved;

+ (id)logger;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsInvitable:(bool)arg1 wasRemoved:(bool)arg2;
- (bool)isInvitable;
- (bool)wasRemoved;

@end
