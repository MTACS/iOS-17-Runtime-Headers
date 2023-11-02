
@interface RBSConstraintsAttribute : RBSAttribute {
    unsigned long long  _constraints;
}

@property (nonatomic, readonly) unsigned long long constraints;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (id)attributeWithConstraints:(unsigned long long)arg1;

- (unsigned long long)constraints;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard

- (bool)allowedWithAttribute:(id)arg1 error:(id*)arg2;
- (bool)hasMandatoryAttributes:(id)arg1 error:(id*)arg2;

@end
