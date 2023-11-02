
@interface MTRPowerSourceClusterWiredFaultChangeEvent : NSObject <NSCopying> {
    NSArray * _current;
    NSArray * _previous;
}

@property (nonatomic, copy) NSArray *current;
@property (nonatomic, copy) NSArray *previous;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)current;
- (id)description;
- (id)init;
- (id)previous;
- (void)setCurrent:(id)arg1;
- (void)setPrevious:(id)arg1;

@end
