
@interface DTSysmonTapRecordDecoder : NSObject {
    NSArray * _coalitionAttributes;
    unsigned long long  _mostRecentEpoch;
    NSArray * _processAttributes;
    NSArray * _systemAttributes;
}

- (void).cxx_destruct;
- (unsigned long long)enumerateRecordsFromSample:(id)arg1 block:(id /* block */)arg2;

@end
