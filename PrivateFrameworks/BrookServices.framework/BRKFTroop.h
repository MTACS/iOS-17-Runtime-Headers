
@interface BRKFTroop : NSObject {
    <BRKFTroopDelegate> * _delegate;
}

@property (nonatomic) <BRKFTroopDelegate> *delegate;

+ (bool)isEnabled;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)startListeningForDemoReset;
- (void)stopListeningForDemoReset;

@end
