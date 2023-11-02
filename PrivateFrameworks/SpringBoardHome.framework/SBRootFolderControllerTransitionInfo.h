
@interface SBRootFolderControllerTransitionInfo : NSObject {
    long long  _destinationPageState;
    long long  _sourcePageState;
}

@property (nonatomic) long long destinationPageState;
@property (nonatomic) long long sourcePageState;

- (long long)destinationPageState;
- (void)setDestinationPageState:(long long)arg1;
- (void)setSourcePageState:(long long)arg1;
- (long long)sourcePageState;

@end
