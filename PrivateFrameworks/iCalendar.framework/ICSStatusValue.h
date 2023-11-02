
@interface ICSStatusValue : ICSPredefinedValue {
    NSString * _statusString;
}

@property (retain) NSString *statusString;

+ (id)statusTypeFromCode:(int)arg1;
+ (id)statusTypeFromCode:(int)arg1 statusString:(id)arg2;
+ (id)statusValueFromICSString:(id)arg1;

- (void).cxx_destruct;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (Class)classForCoder;
- (void)setStatusString:(id)arg1;
- (id)statusString;

@end
