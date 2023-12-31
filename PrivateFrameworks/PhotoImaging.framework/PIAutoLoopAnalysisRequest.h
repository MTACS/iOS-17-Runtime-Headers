
@interface PIAutoLoopAnalysisRequest : NURenderRequest {
    long long  _flavor;
}

@property (nonatomic) long long flavor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)flavor;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (void)setFlavor:(long long)arg1;
- (void)submit:(id /* block */)arg1;

@end
