
@interface SVXAlarmAndTimerFiringContext : NSObject <NSCopying, NSSecureCoding> {
    bool  _hasOtherRunningTimers;
    NSOrderedSet * _orderedFiringAlarms;
    NSOrderedSet * _orderedFiringTimers;
}

@property (nonatomic, readonly) bool hasOtherRunningTimers;
@property (nonatomic, readonly, copy) NSOrderedSet *orderedFiringAlarms;
@property (nonatomic, readonly, copy) NSOrderedSet *orderedFiringTimers;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasOtherRunningTimers;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrderedFiringAlarms:(id)arg1 orderedFiringTimers:(id)arg2 hasOtherRunningTimers:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)orderedFiringAlarms;
- (id)orderedFiringTimers;

@end
