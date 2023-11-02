
@interface CLSInputClue : CLSClue {
    bool  _needsPreparation;
}

@property bool needsPreparation;

- (void)_prepareWithProgressBlock:(id /* block */)arg1;
- (id)init;
- (bool)needsPreparation;
- (void)prepareIfNeeded;
- (void)setNeedsPreparation:(bool)arg1;

@end
