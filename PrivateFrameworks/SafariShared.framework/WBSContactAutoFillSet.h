
@interface WBSContactAutoFillSet : NSObject {
    NSDictionary * _controlIDToValueMap;
    NSArray * _fillDisplayProperties;
    NSString * _label;
    NSSet * _propertiesToFillOrSkip;
    NSArray * _skipDisplayProperties;
}

@property (nonatomic, readonly, copy) NSDictionary *controlIDToValueMap;
@property (nonatomic, readonly, copy) NSArray *fillDisplayProperties;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly, copy) NSSet *propertiesToFillOrSkip;
@property (nonatomic, readonly, copy) NSArray *skipDisplayProperties;

+ (id)displayStringsForFillMatches:(id)arg1 skipMatches:(id)arg2 matchesForForm:(id)arg3 label:(id)arg4 formDataController:(id)arg5;
+ (id)displayStringsForSkipMatches:(id)arg1 matchesForForm:(id)arg2 formDataController:(id)arg3;

- (void).cxx_destruct;
- (id)controlIDToValueMap;
- (id)fillDisplayProperties;
- (id)initWithControlIDToValueMap:(id)arg1 label:(id)arg2 fillDisplayProperties:(id)arg3 skipDisplayProperties:(id)arg4 propertiesToFillOrSkip:(id)arg5;
- (id)label;
- (id)propertiesToFillOrSkip;
- (id)skipDisplayProperties;

@end
