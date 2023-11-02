
@interface SUCoreDiagPoint : NSObject <NSSecureCoding> {
    NSString * _activity;
    long long  _checkedCode;
    NSString * _checkedDomain;
    long long  _checkedIndications;
    long long  _checkedLayer;
    long long  _code;
    NSString * _errorDesc;
    NSString * _location;
    NSString * _next;
    NSString * _param;
    NSString * _previous;
    NSString * _reason;
    long long  _trackType;
}

@property (nonatomic, retain) NSString *activity;
@property (nonatomic) long long checkedCode;
@property (nonatomic, retain) NSString *checkedDomain;
@property (nonatomic) long long checkedIndications;
@property (nonatomic) long long checkedLayer;
@property (nonatomic) long long code;
@property (nonatomic, retain) NSString *errorDesc;
@property (nonatomic, retain) NSString *location;
@property (nonatomic, retain) NSString *next;
@property (nonatomic, retain) NSString *param;
@property (nonatomic, retain) NSString *previous;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic) long long trackType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionStandard;
- (id)_descriptionStateEvent;
- (id)_initFullySpecified:(long long)arg1 fromLocation:(id)arg2 forReason:(id)arg3 withCode:(long long)arg4 withError:(id)arg5 previous:(id)arg6 next:(id)arg7 activity:(id)arg8 param:(id)arg9;
- (id)_summaryStandard;
- (id)_summaryStateEvent;
- (id)activity;
- (long long)checkedCode;
- (id)checkedDomain;
- (long long)checkedIndications;
- (long long)checkedLayer;
- (long long)code;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)errorDesc;
- (id)initOfType:(long long)arg1 fromLocation:(id)arg2 forReason:(id)arg3 withCode:(long long)arg4 withError:(id)arg5;
- (id)initStateEventForFSM:(id)arg1 previousState:(id)arg2 fsmEvent:(id)arg3 nextState:(id)arg4 fsmAction:(id)arg5 eventInfo:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)location;
- (id)next;
- (id)param;
- (id)previous;
- (id)reason;
- (void)setActivity:(id)arg1;
- (void)setCheckedCode:(long long)arg1;
- (void)setCheckedDomain:(id)arg1;
- (void)setCheckedIndications:(long long)arg1;
- (void)setCheckedLayer:(long long)arg1;
- (void)setCode:(long long)arg1;
- (void)setErrorDesc:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setNext:(id)arg1;
- (void)setParam:(id)arg1;
- (void)setPrevious:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setTrackType:(long long)arg1;
- (id)summary;
- (long long)trackType;
- (id)typeName;

@end
