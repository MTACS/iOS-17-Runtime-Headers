
@interface WFDialogResponse : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    long long  _responseCode;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long responseCode;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCancelled:(bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseCode:(long long)arg1;
- (bool)isCancelled;
- (long long)responseCode;
- (bool)shouldDismissDialogInTransientMode;

@end
