
@protocol PKObservableContentContainer <UIContentContainer>

@required

- (void)addContentContainerObserver:(id <PKContentContainerObserver>)arg1;
- (void)removeContentContainerObserver:(id <PKContentContainerObserver>)arg1;

@end
