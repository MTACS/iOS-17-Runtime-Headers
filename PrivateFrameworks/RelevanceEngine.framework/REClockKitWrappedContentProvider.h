
@interface REClockKitWrappedContentProvider : RETextContentProvider {
    CLKTextProvider * _clockKitTextProvider;
}

@property (nonatomic, readonly) CLKTextProvider *clockKitTextProvider;

- (void).cxx_destruct;
- (id)attributedStringRepresentation;
- (id)clockKitTextProvider;
- (id)clockKitTextProviderRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithClockKitTextProvider:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
