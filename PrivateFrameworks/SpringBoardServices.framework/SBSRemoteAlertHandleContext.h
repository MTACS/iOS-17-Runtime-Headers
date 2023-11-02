
@interface SBSRemoteAlertHandleContext : NSObject <NSSecureCoding> {
    bool  _active;
    NSString * _handleID;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly, copy) NSString *handleID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)handleID;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandleID:(id)arg1;
- (bool)isActive;
- (void)setActive:(bool)arg1;

@end
