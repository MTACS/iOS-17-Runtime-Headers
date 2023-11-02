
@interface HFEventBuilderItem : HFItem {
    NSString * _comparisonKey;
    NSSet * _eventBuilders;
    HFTriggerNaturalLanguageOptions * _naturalLanguageOptions;
    HFEventBuilder * _representativeEventBuilder;
}

@property (nonatomic, retain) NSString *comparisonKey;
@property (nonatomic, retain) NSSet *eventBuilders;
@property (nonatomic, retain) HFTriggerNaturalLanguageOptions *naturalLanguageOptions;
@property (nonatomic, retain) HFEventBuilder *representativeEventBuilder;

+ (id)eventBuilderItemForEventBuilders:(id)arg1;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)comparisonKey;
- (id)eventBuilders;
- (id)initWithEventBuilders:(id)arg1;
- (id)naturalLanguageOptions;
- (id)representativeEventBuilder;
- (void)setComparisonKey:(id)arg1;
- (void)setEventBuilders:(id)arg1;
- (void)setNaturalLanguageOptions:(id)arg1;
- (void)setRepresentativeEventBuilder:(id)arg1;

@end
