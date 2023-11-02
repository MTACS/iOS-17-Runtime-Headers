
@interface OSADateCounter : NSObject {
    NSString * _countKey;
    NSString * _dayKey;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (void)increment;
- (id)initWithIdentifier:(id)arg1;
- (void)resetCount;

@end
