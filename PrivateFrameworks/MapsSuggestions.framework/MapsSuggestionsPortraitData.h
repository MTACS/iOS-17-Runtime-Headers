
@interface MapsSuggestionsPortraitData : NSObject {
    NSDate * _lastInteractionTime;
    NSString * _name;
}

@property (nonatomic, retain) NSDate *lastInteractionTime;
@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 lastInteractionTime:(id)arg2;
- (id)lastInteractionTime;
- (id)name;
- (void)setLastInteractionTime:(id)arg1;
- (void)setName:(id)arg1;

@end
