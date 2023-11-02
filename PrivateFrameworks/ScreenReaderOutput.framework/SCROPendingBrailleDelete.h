
@interface SCROPendingBrailleDelete : SCROPendingBrailleEdit {
    bool  _isForwardDelete;
}

@property (nonatomic) bool isForwardDelete;

- (bool)isForwardDelete;
- (void)setIsForwardDelete:(bool)arg1;

@end
