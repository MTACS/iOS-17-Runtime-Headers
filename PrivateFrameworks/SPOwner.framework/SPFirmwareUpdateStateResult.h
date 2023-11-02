
@interface SPFirmwareUpdateStateResult : NSObject <NSSecureCoding> {
    NSString * _currentSystemVersion;
    NSError * _error;
    long long  _state;
    NSDate * _stateDate;
}

@property (nonatomic, retain) NSString *currentSystemVersion;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) long long state;
@property (nonatomic, retain) NSDate *stateDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)currentSystemVersion;
- (id)description;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)firmwareUpdateState;
- (id)initWithCoder:(id)arg1;
- (void)setCurrentSystemVersion:(id)arg1;
- (void)setError:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setStateDate:(id)arg1;
- (long long)state;
- (id)stateDate;

@end
