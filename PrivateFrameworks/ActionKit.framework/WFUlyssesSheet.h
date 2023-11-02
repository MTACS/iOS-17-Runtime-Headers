
@interface WFUlyssesSheet : MTLModel <MTLJSONSerializing, NSSecureCoding, WFNaming> {
    NSString * _identifier;
    NSArray * _keywords;
    NSArray * _notes;
    NSString * _text;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *keywords;
@property (nonatomic, readonly) NSArray *notes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)allowedSecureCodingClassesByPropertyKey;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)identifier;
- (id)keywords;
- (id)notes;
- (id)text;
- (id)title;
- (id)wfName;

@end
