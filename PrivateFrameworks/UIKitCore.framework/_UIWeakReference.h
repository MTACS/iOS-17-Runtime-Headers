
@interface _UIWeakReference : NSObject <NSCopying> {
    id  _object;
}

@property (nonatomic) id object;

+ (id)weakReferenceWrappingObject:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithObject:(id)arg1;
- (id)object;
- (void)setObject:(id)arg1;

@end
