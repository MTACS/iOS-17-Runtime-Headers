
@interface MTLCounterSetInternal : NSObject <MTLCounterSet> {
    NSArray * _counters;
    NSString * _description;
    NSString * _name;
}

@property (readonly, copy) NSArray *counters;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *name;
@property (readonly) Class superclass;

- (id)counters;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 description:(id)arg2 counters:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;

@end
