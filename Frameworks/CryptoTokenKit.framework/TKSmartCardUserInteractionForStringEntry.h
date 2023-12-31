
@interface TKSmartCardUserInteractionForStringEntry : TKSmartCardUserInteraction <NSSecureCoding> {
    NSString * _result;
    TKSmartCardSlot * _slot;
}

@property (retain) NSString *result;
@property TKSmartCardSlot *slot;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)result;
- (void)runWithReply:(id /* block */)arg1;
- (void)setResult:(id)arg1;
- (void)setSlot:(id)arg1;
- (id)slot;

@end
