
@interface PDSplitDirectionOptions : PDTransitionOptions {
    int  mInOut;
    int  mOrientation;
}

- (int)inOut;
- (int)orientation;
- (void)setInOut:(int)arg1;
- (void)setOrientation:(int)arg1;

@end
