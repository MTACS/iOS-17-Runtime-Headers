
@interface DDUIPhysicalUnitGroup : NSObject {
    NSString * _name;
    bool  _restrictedLinkification;
    NSString * _symbol;
    NSArray * _units;
}

@property (readonly) NSString *name;
@property (readonly) bool restrictedLinkification;
@property (readonly) NSString *symbol;
@property (readonly) NSArray *units;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 units:(id)arg2 restricted:(bool)arg3 symbol:(id)arg4;
- (id)name;
- (bool)restrictedLinkification;
- (id)symbol;
- (id)symbolNameForValue:(double)arg1 unit:(id)arg2;
- (id)units;

@end
