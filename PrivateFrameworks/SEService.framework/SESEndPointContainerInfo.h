
@interface SESEndPointContainerInfo : NSObject <NSSecureCoding> {
    NSData * _appletAID;
    bool  _isSuspended;
}

@property (readonly) NSData *appletAID;
@property (readonly) bool isSuspended;

+ (bool)supportsSecureCoding;
+ (id)withAppletAID:(id)arg1 isSuspended:(bool)arg2;

- (void).cxx_destruct;
- (id)appletAID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isSuspended;

@end
