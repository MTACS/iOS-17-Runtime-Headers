
@interface FCStatelessPersonalizationConfiguration : NSObject {
    FCStatelessPersonalizationEnablementRequirements * _enablementRequirements;
}

@property (nonatomic, retain) FCStatelessPersonalizationEnablementRequirements *enablementRequirements;

- (void).cxx_destruct;
- (id)description;
- (id)enablementRequirements;
- (id)initWithDictionary:(id)arg1;
- (void)setEnablementRequirements:(id)arg1;

@end
