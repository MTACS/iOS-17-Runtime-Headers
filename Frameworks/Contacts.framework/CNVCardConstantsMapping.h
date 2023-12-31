
@interface CNVCardConstantsMapping : NSObject {
    NSDictionary * _mapping;
}

@property (nonatomic, retain) NSDictionary *mapping;

+ (id)CNToVCardInstantMessageConstantsMapping;
+ (id)CNToVCardSocialProfileConstantsMapping;
+ (id)vCardToCNInstantMessageConstantsMapping;
+ (id)vCardToCNSocialProfileConstantsMapping;

- (void).cxx_destruct;
- (id)initWithMapping:(id)arg1;
- (id)invertedMapping;
- (id)mappedConstant:(id)arg1;
- (id)mapping;
- (void)setMapping:(id)arg1;

@end
