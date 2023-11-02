
@interface CNDecision : NSObject <NSCopying> {
    PTCinematographyDecision * _internalDecision;
}

@property (readonly) long long detectionGroupID;
@property (readonly) long long detectionID;
@property (getter=isGroupDecision, readonly) bool groupDecision;
@property (retain) PTCinematographyDecision *internalDecision;
@property (getter=isStrongDecision, readonly) bool strongDecision;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (getter=isUserDecision, readonly) bool userDecision;

+ (id)_copyDecisionFromInternal:(id)arg1;
+ (id)_copyDecisionsFromInternal:(id)arg1;
+ (id)_copyInternalFromDecisions:(id)arg1;
+ (id)_takeDecisionsFromInternal:(id)arg1;

- (void).cxx_destruct;
- (id)_initCopyingInternalDecision:(id)arg1;
- (id)_initTakingInternalDecision:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)detectionGroupID;
- (long long)detectionID;
- (unsigned long long)hash;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 detectionGroupID:(long long)arg2 strong:(bool)arg3;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 detectionID:(long long)arg2 strong:(bool)arg3;
- (id)internalDecision;
- (bool)isEqual:(id)arg1;
- (bool)isGroupDecision;
- (bool)isStrongDecision;
- (bool)isUserDecision;
- (void)setInternalDecision:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
