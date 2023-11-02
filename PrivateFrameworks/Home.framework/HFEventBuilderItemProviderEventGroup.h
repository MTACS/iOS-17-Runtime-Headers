
@interface HFEventBuilderItemProviderEventGroup : NSObject {
    NSString * _comparisonKey;
    NSSet * _eventBuilders;
}

@property (nonatomic, retain) NSString *comparisonKey;
@property (nonatomic, retain) NSSet *eventBuilders;

+ (id)eventGroupWithBuilders:(id)arg1;

- (void).cxx_destruct;
- (id)comparisonKey;
- (id)eventBuilders;
- (id)initWithEventBuilders:(id)arg1;
- (void)setComparisonKey:(id)arg1;
- (void)setEventBuilders:(id)arg1;

@end
