
@interface _UITextInputSessionActionInformation : NSObject {
    NSString * _sessionActionString;
    bool  _sessionHasDictation;
    bool  _sessionHasOnlyPrimaryInput;
}

@property (nonatomic, copy) NSString *sessionActionString;
@property (nonatomic) bool sessionHasDictation;
@property (nonatomic) bool sessionHasOnlyPrimaryInput;

- (void).cxx_destruct;
- (id)sessionActionString;
- (bool)sessionHasDictation;
- (bool)sessionHasOnlyPrimaryInput;
- (void)setSessionActionString:(id)arg1;
- (void)setSessionHasDictation:(bool)arg1;
- (void)setSessionHasOnlyPrimaryInput:(bool)arg1;

@end
