
@interface _UICommandDiffv1 : NSObject <NSCopying, NSSecureCoding> {
    NSOrderedSet * _changes;
}

@property (nonatomic, readonly) NSOrderedSet *changes;

+ (id)diffWithChanges:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)changes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChanges:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
