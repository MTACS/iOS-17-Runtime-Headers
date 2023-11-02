
@interface HFSignificantTimeEventBuilder : HFEventBuilder <HFTimeEventBuilder> {
    NSString * _significantEvent;
    NSDateComponents * _significantEventOffset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *significantEvent;
@property (nonatomic, copy) NSDateComponents *significantEventOffset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buildNewEventsFromCurrentState;
- (id)compareToObject:(id)arg1;
- (id)comparisonKey;
- (id)description;
- (id)eventType;
- (id)initWithEvent:(id)arg1;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1 withHome:(id)arg2 recurrences:(id)arg3;
- (id)naturalLanguageNameWithOptions:(id)arg1;
- (id)naturalLanguageNameWithOptions:(id)arg1 recurrences:(id)arg2;
- (id)performValidation;
- (void)setSignificantEvent:(id)arg1;
- (void)setSignificantEventOffset:(id)arg1;
- (id)significantEvent;
- (id)significantEventOffset;

@end
