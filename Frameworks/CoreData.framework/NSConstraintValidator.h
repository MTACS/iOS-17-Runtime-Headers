
@interface NSConstraintValidator : NSObject {
    id * _cachesByEntity;
    NSArray * _entities;
    _PFModelMap * _modelMap;
}

- (void)dealloc;

@end
