
@interface AUParameter : AUParameterNode <NSSecureCoding> {
    unsigned long long  _address;
    NSArray * _dependentParameters;
    _AUStaticParameterInfo * _info;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _localValueStale;
    struct atomic<int> { 
        struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
            _Atomic int __a_value; 
        } __a_; 
    }  _numRecordingObservers;
    struct atomic<int> { 
        struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
            _Atomic int __a_value; 
        } __a_; 
    }  _numUIObservers;
    float  _value;
}

@property (nonatomic) unsigned long long address;
@property (nonatomic, readonly, copy) NSArray *dependentParameters;
@property (nonatomic, readonly) unsigned int flags;
@property (nonatomic, retain) _AUStaticParameterInfo *info;
@property (nonatomic, readonly) float maxValue;
@property (nonatomic, readonly) float minValue;
@property (nonatomic, readonly) unsigned int unit;
@property (nonatomic, readonly, copy) NSString *unitName;
@property (nonatomic) float value;
@property (nonatomic, readonly, copy) NSArray *valueStrings;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)_clumpID;
- (float)_defaultValue;
- (float)_internalValue;
- (void)_observersChanged:(bool)arg1 deltaCount:(int)arg2;
- (unsigned int)_originalOrder;
- (unsigned long long)address;
- (id)copyNodeWithOffset:(unsigned long long)arg1;
- (void)dealloc;
- (id)dependentParameters;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)flags;
- (id)info;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 name:(id)arg2 address:(unsigned long long)arg3 min:(float)arg4 max:(float)arg5 unit:(unsigned int)arg6 unitName:(id)arg7 flags:(unsigned int)arg8 valueStrings:(id)arg9 dependentParameters:(id)arg10;
- (bool)localValueStale;
- (float)maxValue;
- (float)minValue;
- (void)setAddress:(unsigned long long)arg1;
- (void)setInfo:(id)arg1;
- (void)setLocalValueStale:(bool)arg1;
- (void)setValue:(float)arg1;
- (void)setValue:(float)arg1 extOriginator:(struct AUParameterObserverExtendedToken { unsigned long long x1; })arg2 atHostTime:(unsigned long long)arg3 eventType:(unsigned int)arg4;
- (void)setValue:(float)arg1 originator:(void*)arg2;
- (void)setValue:(float)arg1 originator:(void*)arg2 atHostTime:(unsigned long long)arg3;
- (void)setValue:(float)arg1 originator:(void*)arg2 atHostTime:(unsigned long long)arg3 eventType:(unsigned int)arg4;
- (void)set_clumpID:(unsigned int)arg1;
- (void)set_defaultValue:(float)arg1;
- (void)set_originalOrder:(unsigned int)arg1;
- (id)stringFromValue:(const float*)arg1;
- (unsigned int)unit;
- (id)unitName;
- (float)value;
- (float)valueFromString:(id)arg1;
- (id)valueStrings;

@end
