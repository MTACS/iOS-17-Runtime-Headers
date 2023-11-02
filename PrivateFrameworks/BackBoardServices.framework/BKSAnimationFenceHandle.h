
@interface BKSAnimationFenceHandle : NSObject <BSInvalidatable, BSXPCCoding, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    CAFenceHandle * _caFence;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long fenceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isUsable, nonatomic, readonly) bool usable;

+ (id)newFenceHandleForCAFenceHandle:(id)arg1;
+ (id)newFenceHandleForContext:(id)arg1;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CAFenceHandle;
- (unsigned int)CAPort;
- (id)_initWithCAFenceHandle:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)fenceName;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)invalidate;
- (bool)isUsable;

@end
