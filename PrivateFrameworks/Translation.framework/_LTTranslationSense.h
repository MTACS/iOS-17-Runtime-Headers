
@interface _LTTranslationSense : NSObject <NSSecureCoding> {
    NSString * _definition;
    NSArray * _labels;
    bool  _phrasebookMatch;
    NSString * _senseID;
    NSString * _sourceMatch;
    NSString * _targetMatch;
}

@property (nonatomic, copy) NSString *definition;
@property (nonatomic, copy) NSArray *labels;
@property (getter=isPhrasebookMatch, nonatomic) bool phrasebookMatch;
@property (nonatomic, copy) NSString *senseID;
@property (nonatomic, copy) NSString *sourceMatch;
@property (nonatomic, copy) NSString *targetMatch;

+ (id)senseFromDictionary:(id)arg1;
+ (id)senseWithPhrasebookMatchMeta:(id)arg1;
+ (id)sensesFromArray:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)definition;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isPhrasebookMatch;
- (id)jsonRepresentation;
- (id)labels;
- (id)senseID;
- (void)setDefinition:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setPhrasebookMatch:(bool)arg1;
- (void)setSenseID:(id)arg1;
- (void)setSourceMatch:(id)arg1;
- (void)setTargetMatch:(id)arg1;
- (id)sourceMatch;
- (id)targetMatch;

@end
