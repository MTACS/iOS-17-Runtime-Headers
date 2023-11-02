
@interface ICASPasswordModeData : NSObject <AADataEventType> {
    ICASEndMode * _endMode;
    ICASPwdModeChangeContextPath * _pwdModeChangeContextPath;
    ICASStartMode * _startMode;
}

@property (nonatomic, readonly) ICASEndMode *endMode;
@property (nonatomic, readonly) ICASPwdModeChangeContextPath *pwdModeChangeContextPath;
@property (nonatomic, readonly) ICASStartMode *startMode;

+ (id)dataName;

- (void).cxx_destruct;
- (id)endMode;
- (id)initWithPwdModeChangeContextPath:(id)arg1 startMode:(id)arg2 endMode:(id)arg3;
- (id)pwdModeChangeContextPath;
- (id)startMode;
- (id)toDict;

@end
