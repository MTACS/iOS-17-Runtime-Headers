
@interface GKSupplementaryViewFactory : NSObject {
    SEL  _configurator;
    Class  _reusableViewClass;
    SEL  _selector;
    id  _target;
}

@property (nonatomic, readonly) SEL configurator;
@property (nonatomic, retain) Class reusableViewClass;
@property (nonatomic) SEL selector;
@property (nonatomic) id target;

+ (id)factoryForClass:(Class)arg1 target:(id)arg2 configurator:(SEL)arg3;
+ (id)factoryForClass:(Class)arg1 target:(id)arg2 configurator:(SEL)arg3 userData:(id)arg4;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (SEL)configurator;
- (id)initWithClass:(Class)arg1 target:(id)arg2 configurator:(SEL)arg3 userData:(id)arg4;
- (Class)reusableViewClass;
- (SEL)selector;
- (void)setReusableViewClass:(Class)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
