
@interface PGTitleSpecPublicEventArgument : PGTitleSpecArgument {
    bool  _shouldUseLongPublicEventTitle;
    unsigned long long  _type;
}

@property (nonatomic, readonly) bool shouldUseLongPublicEventTitle;
@property (nonatomic, readonly) unsigned long long type;

+ (id)_cleanUpEventName:(id)arg1;
+ (id)argumentWithPublicEventType:(unsigned long long)arg1;
+ (id)argumentWithPublicEventType:(unsigned long long)arg1 shouldUseLongPublicEventTitle:(bool)arg2;

- (id)_commonPublicEventNodeForMomentNodes:(id)arg1;
- (id)_generateTitleWithBusinessNameForPublicEventNode:(id)arg1;
- (id)_generateTitleWithCategoryNameForPublicEventNode:(id)arg1;
- (id)_generateTitleWithEventNameForPublicEventNode:(id)arg1;
- (id)_generateTitleWithPerformerNamesForPublicEventNode:(id)arg1;
- (id)_resolvedStringWithMomentNodes:(id)arg1 argumentEvaluationContext:(id)arg2;
- (id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2 argumentEvaluationContext:(id)arg3;
- (id)_resolvedStringWithPublicEventNode:(id)arg1 inMomentNodes:(id)arg2;
- (id)initWithPublicEventType:(unsigned long long)arg1;
- (id)initWithPublicEventType:(unsigned long long)arg1 shouldUseLongPublicEventTitle:(bool)arg2;
- (bool)shouldUseLongPublicEventTitle;
- (unsigned long long)type;

@end
