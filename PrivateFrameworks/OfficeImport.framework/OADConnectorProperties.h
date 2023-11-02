
@interface OADConnectorProperties : OADShapeProperties {
    OADConnection * mFrom;
    OADConnection * mTo;
}

+ (id)defaultProperties;

- (void).cxx_destruct;
- (id)description;
- (id)from;
- (id)init;
- (id)initWithDefaults;
- (id)to;

@end
