
@interface MapsSuggestionsBaseCondition : NSObject <MapsSuggestionsCondition> {
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1;
- (bool)isTrue;
- (id)nameForJSON;
- (id)objectForJSON;
- (id)uniqueName;

@end
