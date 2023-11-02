
@interface DriverApprovalState : NSObject {
    _SwiftDriverApprovalState * _swiftDriverApprovalState;
}

- (void).cxx_destruct;
- (id)displayName;
- (bool)driverIsApproved;
- (id)initWithSwiftDriverApprovalState:(id)arg1;
- (bool)updatePending;
- (id)usageText;

@end
