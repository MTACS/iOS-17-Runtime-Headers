
@interface ISTransparentIcon : ISConcreteIcon {
    ISResourceProvider * _resourceProvider;
}

+ (id)sharedInstance;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)makeResourceProvider;

@end
