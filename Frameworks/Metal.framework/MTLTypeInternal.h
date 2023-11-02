
@interface MTLTypeInternal : MTLType {
    unsigned long long  _dataType;
}

- (unsigned long long)dataType;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithDataType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;

@end
