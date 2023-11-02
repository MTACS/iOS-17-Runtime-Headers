
@interface SearchUIBiomeEvent : BMEventBase <SearchUIBiomeBoolEvent> {
    BMEventBase * _biomeEvent;
}

@property (nonatomic, retain) BMEventBase *biomeEvent;

+ (id)eventForEvent:(id)arg1 contextualActon:(id)arg2;
+ (bool)supportsEvent:(id)arg1 contextualAction:(id)arg2;

- (void).cxx_destruct;
- (id)biomeEvent;
- (void)getEnabledStatusWithCompletion:(id /* block */)arg1;
- (id)initWithEvent:(id)arg1 contextualActon:(id)arg2;
- (void)setBiomeEvent:(id)arg1;

@end
