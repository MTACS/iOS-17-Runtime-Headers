
@interface _NAUINamedViewConstraints : NSObject {
    NSArray * _constraints;
    NSString * _name;
    id  _stalenessToken;
}

@property (nonatomic, readonly) NSArray *constraints;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly, copy) id stalenessToken;

- (void).cxx_destruct;
- (id)constraints;
- (id)initWithName:(id)arg1 constraints:(id)arg2 stalenessToken:(id)arg3;
- (id)name;
- (id)stalenessToken;

@end
