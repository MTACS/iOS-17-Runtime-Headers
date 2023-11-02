
@interface SBSwitcherModifierQuerySnapshot : NSObject {
    NSArray * _contextMethods;
    NSDictionary * _contextMethodsToDescriptions;
    NSArray * _implementingQueryMethods;
    NSArray * _nonImplementingQueryMethods;
    NSDictionary * _queryMethodsToDescriptions;
}

@property (nonatomic, readonly) NSArray *contextMethods;
@property (nonatomic, readonly) NSDictionary *contextMethodsToDescriptions;
@property (nonatomic, readonly) NSArray *implementingQueryMethods;
@property (nonatomic, readonly) NSArray *nonImplementingQueryMethods;
@property (nonatomic, readonly) NSDictionary *queryMethodsToDescriptions;

- (void).cxx_destruct;
- (void)_buildFromModifier:(id)arg1;
- (id)contextMethods;
- (id)contextMethodsToDescriptions;
- (id)implementingQueryMethods;
- (id)initWithModifier:(id)arg1;
- (id)nonImplementingQueryMethods;
- (id)queryMethodsToDescriptions;

@end
