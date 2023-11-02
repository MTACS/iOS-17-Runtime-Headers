
@interface GKEntity : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _components;
}

@property (nonatomic, readonly, retain) NSArray *components;

+ (id)entity;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addComponent:(id)arg1;
- (id)componentForClass:(Class)arg1;
- (id)componentForKey:(id)arg1;
- (id)components;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)removeComponent:(id)arg1;
- (void)removeComponentForClass:(Class)arg1;
- (void)updateWithDeltaTime:(double)arg1;

@end
