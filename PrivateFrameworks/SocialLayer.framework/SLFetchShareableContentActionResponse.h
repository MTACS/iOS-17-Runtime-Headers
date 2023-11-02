
@interface SLFetchShareableContentActionResponse : SLShareableContentActionResponse {
    SLShareableContentLoadResult * _result;
}

@property (nonatomic, retain) SLShareableContentLoadResult *result;

+ (id)responseWithResult:(id)arg1;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)result;
- (void)setResult:(id)arg1;

@end
