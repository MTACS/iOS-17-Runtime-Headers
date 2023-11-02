
@interface PSSpecifierAction : NSObject <NSCopying> {
    id /* block */  _getter;
    id /* block */  _setter;
}

@property (nonatomic, copy) id /* block */ getter;
@property (nonatomic, copy) id /* block */ setter;

+ (id)actionWithBoolDetailClass:(Class)arg1;
+ (id)actionWithGetter:(id /* block */)arg1 setter:(id /* block */)arg2;
+ (id)actionWithTarget:(id)arg1 getterSelector:(SEL)arg2 setterSelector:(SEL)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)getter;
- (void)setGetter:(id /* block */)arg1;
- (void)setSetter:(id /* block */)arg1;
- (id /* block */)setter;

@end
