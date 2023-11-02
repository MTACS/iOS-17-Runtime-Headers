
@interface COStateUpdateNotification : COMeshNotification {
    NSDictionary * _removals;
    NSDictionary * _updates;
}

@property (nonatomic, readonly, copy) NSDictionary *removals;
@property (nonatomic, readonly, copy) NSDictionary *updates;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpdates:(id)arg1 removals:(id)arg2;
- (id)removals;
- (id)updates;

@end
