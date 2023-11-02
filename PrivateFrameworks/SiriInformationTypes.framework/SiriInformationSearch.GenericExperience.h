
@interface SiriInformationSearch.GenericExperience : SiriInformationSearch.Experience {
    void components;
    void renderOptions;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  serverSuggestions;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
