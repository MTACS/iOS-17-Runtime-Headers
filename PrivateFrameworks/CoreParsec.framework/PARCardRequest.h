
@interface PARCardRequest : PARRequest <NSSecureCoding> {
    NSURL * _cardURL;
}

@property (nonatomic, copy) NSURL *cardURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cardURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)nwActivityLabel;
- (void)setCardURL:(id)arg1;

@end
