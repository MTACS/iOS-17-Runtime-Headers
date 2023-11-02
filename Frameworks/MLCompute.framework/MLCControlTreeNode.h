
@interface MLCControlTreeNode : NSObject <NSCopying> {
    bool  _needToNegate;
    MLCTensor * _predicate;
}

@property (nonatomic, readonly) bool needToNegate;
@property (nonatomic, readonly) MLCTensor *predicate;

+ (id)controlTreeNodeWithPredicate:(id)arg1 needToNegate:(bool)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithTensor:(id)arg1 needToNegate:(bool)arg2;
- (bool)needToNegate;
- (id)predicate;

@end
