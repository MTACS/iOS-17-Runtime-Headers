
@interface RBSMachPort : NSObject <NSCopying, NSSecureCoding, RBSXPCSecureCoding> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned int  _port;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)portConsumingRightForPort:(unsigned int)arg1;
+ (id)portForPort:(unsigned int)arg1;
+ (bool)supportsRBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (bool)isUsable;
- (unsigned int)port;

@end
