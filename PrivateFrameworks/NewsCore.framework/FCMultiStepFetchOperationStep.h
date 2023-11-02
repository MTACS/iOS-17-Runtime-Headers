
@interface FCMultiStepFetchOperationStep : NSObject {
    SEL  _fetchSelector;
    bool  _isCritical;
}

@property (nonatomic) SEL fetchSelector;
@property (nonatomic) bool isCritical;

- (SEL)fetchSelector;
- (bool)isCritical;
- (void)setFetchSelector:(SEL)arg1;
- (void)setIsCritical:(bool)arg1;

@end
