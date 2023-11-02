
@interface WFHandleInteractionDialogResponse : WFDialogResponse <BSXPCSecureCoding, NSSecureCoding> {
    unsigned long long  _interactionResponseCode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long interactionResponseCode;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInteractionResponseCode:(unsigned long long)arg1;
- (unsigned long long)interactionResponseCode;

@end
