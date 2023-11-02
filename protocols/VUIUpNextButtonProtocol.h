
@protocol VUIUpNextButtonProtocol <NSObject>

@required

- (VUIUpNextButtonProperties *)properties;
- (void)upNextStateChangedToAdded;
- (void)upNextStateChangedToRemoved;

@end
