
@interface LAPSFetchOldPasscodeResult : NSObject {
    LAPSPasscode * _passcode;
}

@property (nonatomic, readonly) LAPSPasscode *passcode;

- (void).cxx_destruct;
- (id)initWithPasscode:(id)arg1;
- (id)initWithRawPasscode:(id)arg1;
- (id)passcode;

@end
