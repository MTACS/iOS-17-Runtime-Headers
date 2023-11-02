
@interface _LSAggregatePropertyList : _LSLazyPropertyList {
    NSArray * _plists;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_getPropertyList:(id*)arg1;
- (bool)_getValue:(id*)arg1 forPropertyListKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLazyPropertyLists:(id)arg1;
- (void)prewarm;

@end
