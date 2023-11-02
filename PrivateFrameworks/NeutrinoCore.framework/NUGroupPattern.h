
@interface NUGroupPattern : NUPattern {
    NSArray * _group;
}

@property (readonly) NSArray *group;

- (void).cxx_destruct;
- (id)group;
- (id)init;
- (id)initWithGroup:(id)arg1;
- (bool)isEqualToGroupPattern:(id)arg1;
- (bool)isEqualToPattern:(id)arg1;
- (bool)isFixedOrder;
- (bool)match:(id)arg1 location:(unsigned long long*)arg2 count:(unsigned long long*)arg3;
- (id)optimizedPattern;
- (id)shortestMatch;
- (id)stringRepresentation;
- (id)tokens;

@end
