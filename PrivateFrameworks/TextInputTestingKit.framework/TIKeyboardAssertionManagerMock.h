
@interface TIKeyboardAssertionManagerMock : NSObject <TIKeyboardAssertionManaging> {
    <TIKeyboardAssertionManagerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TIKeyboardAssertionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAssertions;
@property (nonatomic, readonly) bool hasBackgroundActivityAssertions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addAssertionForObject:(id)arg1;
- (id)delegate;
- (bool)hasAssertions;
- (bool)hasBackgroundActivityAssertions;
- (void)releaseBackgroundActivityAssertion;
- (void)removeAssertionForObject:(id)arg1;
- (void)retainBackgroundActivityAssertion;
- (void)setDelegate:(id)arg1;

@end
