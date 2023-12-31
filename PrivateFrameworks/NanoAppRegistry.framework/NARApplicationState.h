
@interface NARApplicationState : NSObject <NSSecureCoding> {
    bool  _removedSystemApp;
    bool  _restricted;
}

@property (getter=isRemovedSystemApp, nonatomic, readonly) bool removedSystemApp;
@property (getter=isRestricted, nonatomic, readonly) bool restricted;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestricted:(bool)arg1 removedSystemApp:(bool)arg2;
- (bool)isRemovedSystemApp;
- (bool)isRestricted;

@end
