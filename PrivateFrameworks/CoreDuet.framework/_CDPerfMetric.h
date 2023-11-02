
@interface _CDPerfMetric : NSObject {
    unsigned long long  _count;
    unsigned long long  _errorCount;
    _CDPerfMetricFamily * _family;
    double  _lastElapsedTime;
    unsigned long long  _lastResultCount;
    double  _lastUpdateTime;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    double  _maximumElapsedTime;
    double  _minimumElapsedTime;
    NSString * _name;
    NSString * _string;
    double  _totalElapsedTime;
}

@property (readonly) double averageElapsedTime;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long errorCount;
@property (readonly) _CDPerfMetricFamily *family;
@property (readonly) double lastElapsedTime;
@property (readonly) unsigned long long lastResultCount;
@property (readonly) NSDate *lastUpdate;
@property (readonly) double maximumElapsedTime;
@property (readonly) double minimumElapsedTime;
@property (readonly) NSString *name;
@property (readonly) NSString *string;
@property (readonly) double totalElapsedTime;

- (void).cxx_destruct;
- (double)averageElapsedTime;
- (unsigned long long)count;
- (unsigned long long)errorCount;
- (id)family;
- (id)initWithName:(id)arg1 string:(id)arg2 family:(id)arg3;
- (double)lastElapsedTime;
- (unsigned long long)lastResultCount;
- (id)lastUpdate;
- (double)maximumElapsedTime;
- (double)minimumElapsedTime;
- (id)name;
- (id)string;
- (double)totalElapsedTime;

@end
