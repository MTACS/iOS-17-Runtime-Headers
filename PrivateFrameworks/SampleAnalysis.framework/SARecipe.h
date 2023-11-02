
@interface SARecipe : NSObject {
    unsigned long long  _identifier;
    NSMutableArray * _states;
}

@property (readonly) unsigned long long identifier;
@property (readonly) NSArray *states;

- (void).cxx_destruct;
- (unsigned long long)identifier;
- (id)states;

@end
