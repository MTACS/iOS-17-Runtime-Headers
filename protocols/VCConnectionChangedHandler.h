
@protocol VCConnectionChangedHandler <NSObject>

@required

- (void)handleActiveConnectionChange:(id <VCConnectionProtocol>)arg1;

@end
