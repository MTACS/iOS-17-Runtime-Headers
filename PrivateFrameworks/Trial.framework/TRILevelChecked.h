
@interface TRILevelChecked : NSObject {
    TRILevel * _wrapped;
}

+ (id)wrapLevel:(id)arg1;

- (void).cxx_destruct;
- (id)binaryValue;
- (bool)booleanValue;
- (id)description;
- (id)directoryValue;
- (double)doubleValue;
- (id)fileValue;
- (float)floatValue;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (id)initWithLevel:(id)arg1;
- (int)intValue;
- (long long)longValue;
- (id)stringValue;

@end
