
@interface MTLBuiltInArgument : MTLBindingInternal {
    unsigned short  _builtInDataType;
    unsigned short  _builtInType;
}

- (unsigned long long)builtInDataType;
- (unsigned long long)builtInType;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 active:(bool)arg4 index:(unsigned long long)arg5 dataType:(unsigned long long)arg6 builtInType:(unsigned long long)arg7;
- (bool)isEqual:(id)arg1;

@end
