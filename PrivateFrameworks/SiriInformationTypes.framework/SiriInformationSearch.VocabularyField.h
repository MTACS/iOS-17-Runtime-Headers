
@interface SiriInformationSearch.VocabularyField : NSObject <NSSecureCoding> {
    void fieldType;
    void label;
    void value;
}

@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
