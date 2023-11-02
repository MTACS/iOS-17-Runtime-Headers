
@interface DACLifecycleInfo : NSObject <NSCopying, NSSecureCoding> {
    DACActivityDescriptor * _activity;
    DACChangeMarker * _changeMarker;
    DACActivityDescriptor * _origin;
    unsigned long long  _reason;
    unsigned long long  _state;
}

@property (nonatomic, readonly) DACActivityDescriptor *activity;
@property (nonatomic, readonly) DACChangeMarker *changeMarker;
@property (nonatomic, readonly) DACActivityDescriptor *origin;
@property (nonatomic, readonly) unsigned long long reason;
@property (nonatomic, readonly) unsigned long long state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithActivity:(id)arg1 state:(unsigned long long)arg2 reason:(unsigned long long)arg3 origin:(id)arg4 changeMarker:(id)arg5;
- (id)activity;
- (id)changeMarker;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)origin;
- (unsigned long long)reason;
- (unsigned long long)state;

@end
