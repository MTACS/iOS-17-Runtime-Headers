
@interface ISDecoratedIcon : ISConcreteIcon {
    NSArray * _decorations;
    ISIcon * _icon;
}

@property (readonly) NSArray *decorations;
@property (readonly) ISIcon *icon;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)decorations;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)icon;
- (id)iconWithDecorations:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIcon:(id)arg1 decorations:(id)arg2;
- (id)makeResourceProvider;
- (id)symbol;

@end
