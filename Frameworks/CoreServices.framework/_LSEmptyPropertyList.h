
@interface _LSEmptyPropertyList : _LSLazyPropertyList

+ (id)sharedInstance;
+ (bool)supportsSecureCoding;

- (bool)_getPropertyList:(id*)arg1;
- (bool)_getValue:(id*)arg1 forPropertyListKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)uncheckedObjectsForKeys:(id)arg1;

@end
