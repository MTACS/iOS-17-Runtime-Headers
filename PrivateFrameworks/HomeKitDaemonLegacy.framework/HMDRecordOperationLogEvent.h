
@interface HMDRecordOperationLogEvent : HMMLogEvent {
    bool  _legacy;
    unsigned long long  _size;
}

@property (getter=isLegacy, nonatomic, readonly) bool legacy;
@property (nonatomic, readonly) unsigned long long size;

- (id)initWithSize:(unsigned long long)arg1 isLegacy:(bool)arg2;
- (bool)isLegacy;
- (unsigned long long)size;

@end
