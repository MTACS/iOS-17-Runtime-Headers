
@interface NFReaderSessionConfig : NSObject <NSCopying, NSSecureCoding> {
    NSString * _initialScanText;
    unsigned long long  _sessionType;
    unsigned long long  _uiMode;
    NSArray * _vasPasses;
}

@property (nonatomic, readonly, copy) NSString *initialScanText;
@property (nonatomic, readonly) unsigned long long sessionType;
@property (nonatomic, readonly) unsigned long long uiMode;
@property (nonatomic, readonly, copy) NSArray *vasPasses;

+ (id)sessionConfigWithUIMode:(unsigned long long)arg1 sessionType:(unsigned long long)arg2 initialScanText:(id)arg3 vasPass:(id)arg4;
+ (id)sessionTypeString:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initialScanText;
- (unsigned long long)sessionType;
- (unsigned long long)uiMode;
- (id)vasPasses;

@end
