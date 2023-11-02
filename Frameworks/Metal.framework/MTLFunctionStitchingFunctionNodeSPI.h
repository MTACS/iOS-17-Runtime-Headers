
@interface MTLFunctionStitchingFunctionNodeSPI : MTLFunctionStitchingFunctionNode {
    bool  _isEarlyReturn;
}

@property (nonatomic) bool isEarlyReturn;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 arguments:(id)arg2 controlDependencies:(id)arg3 isEarlyReturn:(bool)arg4;
- (bool)isEarlyReturn;
- (bool)isEqual:(id)arg1;
- (void)setIsEarlyReturn:(bool)arg1;

@end
