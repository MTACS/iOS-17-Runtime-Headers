
@interface SiriInformationSearch.VocabularyResult : NSObject <NSSecureCoding> {
    void appId;
    void fieldTypes;
    void fields;
    void itemId;
    void itemType;
    void score;
    void semanticValue;
    void spanBegin;
    void spanEnd;
    void userId;
}

@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
