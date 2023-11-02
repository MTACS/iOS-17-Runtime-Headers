
@interface WFShortcutSuggestionsDescriptor : WFDatabaseObjectDescriptor {
    unsigned long long  _availability;
    NSArray * _suggestions;
}

@property (nonatomic, readonly) unsigned long long availability;
@property (nonatomic, readonly) NSArray *suggestions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)availability;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 suggestions:(id)arg2 availability:(unsigned long long)arg3;
- (id)suggestions;

@end
