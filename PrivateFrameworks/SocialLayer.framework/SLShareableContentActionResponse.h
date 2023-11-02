
@interface SLShareableContentActionResponse : NSObject <BSXPCSecureCoding, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)response;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
