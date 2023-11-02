
@interface _CDSizeMetric : NSObject {
    unsigned long long  _count;
    _CDSizeMetricFamily * _family;
    unsigned long long  _firstSize;
    NSDate * _firstUpdate;
    unsigned long long  _lastSize;
    NSDate * _lastUpdate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _maximumSize;
    unsigned long long  _minimumSize;
    NSString * _name;
    unsigned long long  _scale;
    NSString * _string;
    unsigned long long  _totalSizes;
}

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 string:(id)arg2 scale:(unsigned long long)arg3 family:(id)arg4;

@end
