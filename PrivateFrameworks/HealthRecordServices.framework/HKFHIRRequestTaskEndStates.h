
@interface HKFHIRRequestTaskEndStates : NSObject <NSCopying, NSFastEnumeration, NSSecureCoding> {
    NSArray * _objects;
}

@property (nonatomic, readonly) NSString *eventLoggingDescription;
@property (nonatomic, readonly, copy) HKFHIRRequestTaskEndState *firstObject;
@property (nonatomic, readonly, copy) NSArray *objects;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)eventLoggingDescription;
- (id)firstObject;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndState:(id)arg1;
- (id)initWithEndStates:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objects;

@end
