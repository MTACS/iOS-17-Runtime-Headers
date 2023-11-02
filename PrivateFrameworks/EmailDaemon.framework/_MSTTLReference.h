
@interface _MSTTLReference : NSObject {
    NSDate * _lastSet;
    double  _ttl;
    id  _value;
}

@property (nonatomic, retain) NSDate *lastSet;
@property (nonatomic) double ttl;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (id)getValueWithGenerator:(id /* block */)arg1;
- (id)initWithTTL:(double)arg1;
- (id)lastSet;
- (void)setLastSet:(id)arg1;
- (void)setTtl:(double)arg1;
- (void)setValue:(id)arg1;
- (double)ttl;
- (id)value;

@end
