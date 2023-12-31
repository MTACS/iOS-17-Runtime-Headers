
@interface NSContentSizeLayoutConstraint : NSLayoutConstraint {
    double  _compressionResistancePriority;
    double  _huggingPriority;
}

@property (readonly) double compressionResistancePriority;
@property (readonly) double huggingPriority;

- (id)_priorityDescription;
- (double)compressionResistancePriority;
- (double)huggingPriority;
- (id)initWithLayoutItem:(id)arg1 value:(double)arg2 huggingPriority:(double)arg3 compressionResistancePriority:(double)arg4 orientation:(long long)arg5;
- (double)priorityForVariable:(id)arg1;

@end
