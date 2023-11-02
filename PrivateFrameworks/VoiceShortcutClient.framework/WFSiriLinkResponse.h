
@interface WFSiriLinkResponse : WFSiriActionResponse {
    LNActionOutput * _actionOutput;
}

@property (nonatomic, readonly) LNActionOutput *actionOutput;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionOutput;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOutput:(id)arg1 andError:(id)arg2;

@end
