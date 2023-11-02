
@interface LPAppearanceDependentValue : NSObject {
    NSArray * _dependentTraits;
    id /* block */  _provider;
}

@property (nonatomic, retain) NSArray *dependentTraits;

- (void).cxx_destruct;
- (id)dependentTraits;
- (id)initWithProvider:(id /* block */)arg1;
- (void)setDependentTraits:(id)arg1;
- (id)valueForAppearance:(id)arg1;

@end
