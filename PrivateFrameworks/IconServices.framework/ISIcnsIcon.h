
@interface ISIcnsIcon : ISConcreteIcon <NSSecureCoding> {
    NSData * _icnsData;
    ISIcns * _internalICNS;
}

@property (readonly) ISIcns *icns;
@property (readonly) NSData *icnsData;
@property (retain) ISIcns *internalICNS;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)icns;
- (id)icnsData;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentOfURL:(id)arg1;
- (id)initWithIcns:(id)arg1;
- (id)initWithIcnsData:(id)arg1;
- (id)internalICNS;
- (id)makeResourceProvider;
- (void)setInternalICNS:(id)arg1;

@end
