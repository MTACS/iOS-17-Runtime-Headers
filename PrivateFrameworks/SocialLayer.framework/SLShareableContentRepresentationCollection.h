
@interface SLShareableContentRepresentationCollection : NSObject <NSSecureCoding> {
    NSArray * _representations;
    NSString * _suggestedFileName;
}

@property (nonatomic, readonly, copy) NSArray *representations;
@property (nonatomic, readonly, copy) NSString *suggestedFileName;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRepresentations:(id)arg1 suggestedFileName:(id)arg2;
- (id)representations;
- (id)suggestedFileName;

@end
