
@interface UIDraggingSystemTouchRoutingPolicy : NSObject <NSSecureCoding> {
    NSDictionary * _contextIDsToAlwaysSendTouchesByDisplayIdentifier;
    NSArray * _contextIDsToExcludeFromHitTesting;
    bool  _hitTestingDisabled;
}

@property (nonatomic, copy) NSDictionary *contextIDsToAlwaysSendTouchesByDisplayIdentifier;
@property (nonatomic, copy) NSArray *contextIDsToExcludeFromHitTesting;
@property (getter=isHitTestingDisabled, nonatomic) bool hitTestingDisabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contextIDsToAlwaysSendTouchesByDisplayIdentifier;
- (id)contextIDsToExcludeFromHitTesting;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isHitTestingDisabled;
- (void)setContextIDsToAlwaysSendTouchesByDisplayIdentifier:(id)arg1;
- (void)setContextIDsToExcludeFromHitTesting:(id)arg1;
- (void)setHitTestingDisabled:(bool)arg1;

@end
