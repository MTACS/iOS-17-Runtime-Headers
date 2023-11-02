
@interface MPSGraphResizeBaseOp : MPSGraphOperation {
    bool  _alignCorners;
    bool  _centerResult;
    unsigned long long  _layout;
    unsigned long long  _mode;
    unsigned long long  _nearestRoundingMode;
}

- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 mode:(unsigned long long)arg4 nearestRoundingMode:(unsigned long long)arg5 centerResult:(bool)arg6 alignCorners:(bool)arg7 layout:(unsigned long long)arg8 name:(id)arg9;
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 mode:(unsigned long long)arg4 nearestRoundingMode:(unsigned long long)arg5 centerResult:(bool)arg6 alignCorners:(bool)arg7 name:(id)arg8;

@end
