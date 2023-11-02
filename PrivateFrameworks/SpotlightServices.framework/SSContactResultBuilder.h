
@interface SSContactResultBuilder : SSResultBuilder {
    CNMutableContact * _contact;
    NSString * _displayName;
    NSString * _personIdentifier;
    NSString * _personQueryIdentifier;
    NSString * _realContactIdentifier;
    int  _resultType;
}

@property (nonatomic, retain) CNMutableContact *contact;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, retain) NSString *personIdentifier;
@property (nonatomic, retain) NSString *personQueryIdentifier;
@property (nonatomic, retain) NSString *realContactIdentifier;
@property (nonatomic) int resultType;

+ (id)bundleId;
+ (bool)doesNotContainObject:(id)arg1 inArray:(id)arg2;
+ (id)infoTupleWithKeyTitle:(id)arg1 values:(id)arg2;
+ (bool)isCoreSpotlightResult;
+ (id)labeledValuesFromStrings:(id)arg1 labeledValues:(id)arg2 withStringForLabeledValueBlock:(id /* block */)arg3 labeledValueForStringBlock:(id /* block */)arg4;
+ (id)rowsForKey:(id)arg1 withLabeledValues:(id)arg2 commandButtonItemForString:(id /* block */)arg3;
+ (bool)supportsResult:(id)arg1;

- (void).cxx_destruct;
- (id)buildAction;
- (id)buildBackgroundColor;
- (id)buildBadgingImageWithThumbnail:(id)arg1;
- (id)buildCommand;
- (id)buildDescriptions;
- (id)buildFooterResultForEntity;
- (id)buildFootnote;
- (id)buildHeaderResultForEntity;
- (id)buildPreviewCommand;
- (id)buildResult;
- (id)buildSocialMediaResultForEntity;
- (id)buildThumbnail;
- (id)buildTitle;
- (id)contact;
- (id)displayName;
- (id)fullName;
- (id)initWithResult:(id)arg1;
- (id)initWithResult:(id)arg1 contactEntity:(id)arg2 contact:(id)arg3;
- (id)personIdentifier;
- (id)personQueryIdentifier;
- (id)realContactIdentifier;
- (int)resultType;
- (void)setContact:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setPersonIdentifier:(id)arg1;
- (void)setPersonQueryIdentifier:(id)arg1;
- (void)setRealContactIdentifier:(id)arg1;
- (void)setResultType:(int)arg1;

@end
