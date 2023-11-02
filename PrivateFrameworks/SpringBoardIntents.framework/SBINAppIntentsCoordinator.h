
@interface SBINAppIntentsCoordinator : NSObject {
    <SBINAppIntentsCoordinatorDelegate> * _delegate;
}

@property (nonatomic) <SBINAppIntentsCoordinatorDelegate> *delegate;

+ (id)sharedSystemCoordinator;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (void)performAppIntent:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
