
@interface ICTVUserState : NSObject <ICMutableTVUserState, NSCopying, NSSecureCoding> {
    bool  _activeWatchKitUser;
    bool  _frozen;
}

@property (getter=isActiveWatchKitUser, nonatomic) bool activeWatchKitUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)copyWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isActiveWatchKitUser;
- (bool)isEqual:(id)arg1;
- (bool)isFrozen;
- (void)setActiveWatchKitUser:(bool)arg1;
- (void)setFrozen:(bool)arg1;

@end
