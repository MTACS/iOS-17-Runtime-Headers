
@interface PDPrismOptions : PDSideDirectionOptions {
    bool  mIsContent;
    bool  mIsInverted;
}

- (bool)isContent;
- (bool)isInverted;
- (void)setIsContent:(bool)arg1;
- (void)setIsInverted:(bool)arg1;

@end
