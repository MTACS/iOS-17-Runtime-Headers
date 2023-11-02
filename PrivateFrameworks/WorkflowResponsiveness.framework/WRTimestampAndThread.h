
@interface WRTimestampAndThread : NSObject {
    unsigned long long  _machContTimeNs;
    unsigned long long  _threadID;
}

@property (readonly) unsigned long long machContTimeNs;
@property (readonly) unsigned long long threadID;

- (id)initWithThreadID:(unsigned long long)arg1 machContTimeNs:(unsigned long long)arg2;
- (unsigned long long)machContTimeNs;
- (unsigned long long)threadID;

@end
