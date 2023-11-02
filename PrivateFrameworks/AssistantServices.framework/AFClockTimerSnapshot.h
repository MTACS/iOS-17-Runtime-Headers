
@interface AFClockTimerSnapshot : NSObject <AFContextSnapshot, AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    NSDate * _date;
    unsigned long long  _generation;
    NSOrderedSet * _notifiedFiringTimerIDs;
    NSDictionary * _timersByID;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long generation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSOrderedSet *notifiedFiringTimerIDs;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDictionary *timersByID;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)ad_shortDescription;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firingTimers;
- (unsigned long long)generation;
- (bool)hasFiringTimers;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithGeneration:(unsigned long long)arg1 date:(id)arg2 timersByID:(id)arg3 notifiedFiringTimerIDs:(id)arg4;
- (id)initWithSerializedBackingStore:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mostRecentFiringTimer;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)notifiedFiringTimerIDs;
- (id)serializedBackingStore;
- (id)timersByID;

// Image: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX

- (id)svx_notifiedFiringTimers;

@end
