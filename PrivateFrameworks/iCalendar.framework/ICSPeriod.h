
@interface ICSPeriod : NSObject <NSSecureCoding> {
    ICSDuration * _duration;
    ICSDateValue * _end;
    ICSDateValue * _start;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)end;
- (id)initWithCoder:(id)arg1;
- (id)initWithStart:(id)arg1;
- (id)initWithStart:(id)arg1 duration:(id)arg2;
- (id)initWithStart:(id)arg1 end:(id)arg2;
- (bool)isDurationBased;
- (id)start;

@end
