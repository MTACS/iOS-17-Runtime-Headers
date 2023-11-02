
@interface _ICNamedEntityRecord : NSObject <NSCopying> {
    unsigned long long  _data;
    NSString * _name;
    bool  _passesFilters;
    double  _timestamp;
}

@property (nonatomic, readonly) unsigned long long data;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool passesFilters;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)data;
- (id)description;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 data:(unsigned long long)arg2;
- (id)initWithName:(id)arg1 timestamp:(double)arg2 passesFilters:(bool)arg3;
- (id)name;
- (bool)passesFilters;
- (double)timestamp;

@end
