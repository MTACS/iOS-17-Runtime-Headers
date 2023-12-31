
@interface SXComponentClassification : NSObject {
    NSArray * _defaultStyleIdentifiers;
    SXComponentLayoutRules * _layoutRules;
    SXComponentTextRules * _textRules;
}

@property (nonatomic, readonly) unsigned long long contentRelevance;
@property (nonatomic, readonly) NSArray *defaultComponentStyleIdentifiers;
@property (nonatomic, readonly) NSArray *defaultStyleIdentifiers;
@property (nonatomic, readonly) NSArray *defaultTextStyleIdentifiers;
@property (nonatomic, readonly) SXComponentLayoutRules *layoutRules;
@property (nonatomic, readonly) SXComponentTextRules *textRules;

+ (id)classificationForComponentWithRole:(int)arg1;
+ (id)classificationForComponentWithType:(id)arg1;
+ (id)classificationForComponentWithType:(id)arg1 role:(id)arg2;
+ (void)initialize;
+ (void)registerClassification;
+ (int)role;
+ (id)roleString;
+ (bool)shouldRegister;
+ (id)typeString;

- (void).cxx_destruct;
- (id)accessibilityContextualLabel;
- (id)accessibilityCustomRotorMembership;
- (bool)accessibilitySkippedDuringReadAll;
- (Class)componentModelClass;
- (unsigned long long)contentRelevance;
- (id)defaultComponentStyleIdentifiers;
- (id)defaultStyleIdentifiers;
- (id)defaultTextStyleIdentifiers;
- (bool)hasAffiliationWithClassification:(id)arg1 forDirection:(long long)arg2;
- (id)init;
- (bool)isCollapsible;
- (id)layoutRules;
- (void)setupStyleIdentifiers;
- (id)textRules;

@end
