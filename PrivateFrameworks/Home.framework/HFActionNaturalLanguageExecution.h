
@interface HFActionNaturalLanguageExecution : NSObject {
    NSSet * _actions;
    NSSet * _allInvolvedObjects;
    NSMutableSet * _indescribableActionTypes;
    NSSet * _involvedServices;
    bool  _named;
    HFActionNaturalLanguageOptions * _options;
}

@property (nonatomic, readonly) unsigned long long accessoryCount;
@property (nonatomic, retain) NSSet *actions;
@property (nonatomic, retain) NSSet *allInvolvedObjects;
@property (nonatomic, readonly) NSMutableSet *indescribableActionTypes;
@property (nonatomic, retain) NSSet *involvedServices;
@property (nonatomic) bool named;
@property (nonatomic, retain) HFActionNaturalLanguageOptions *options;
@property (nonatomic, readonly) <HFAccessoryRepresentable> *singularInvolvedObject;

+ (id)_accessoryRepresentingIDsInSet:(id)arg1;
+ (id)executionWithActions:(id)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)accessoryCount;
- (id)actions;
- (id)allInvolvedObjects;
- (id)indescribableActionTypes;
- (id)initWithOptions:(id)arg1;
- (id)involvedServices;
- (bool)named;
- (id)options;
- (void)setActions:(id)arg1;
- (void)setAllInvolvedObjects:(id)arg1;
- (void)setInvolvedServices:(id)arg1;
- (void)setNamed:(bool)arg1;
- (void)setOptions:(id)arg1;
- (id)singularInvolvedObject;
- (void)updateInvolvedObjects;

@end
