
@interface UIAnimatablePropertyBase : NSObject {
    _UIViewAnimatablePropertyTransformer * _transformer;
}

@property (nonatomic, retain) _UIViewAnimatablePropertyTransformer *transformer;

- (void).cxx_destruct;
- (void)setTransformer:(id)arg1;
- (id)transformer;

@end
