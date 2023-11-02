
@interface HFStateDumpEntry : NSObject {
    HFStateDumpBuilderContext * _context;
    NSString * _name;
    id  _object;
    unsigned long long  _options;
}

@property (nonatomic, copy) HFStateDumpBuilderContext *context;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) id object;
@property (nonatomic) unsigned long long options;

- (void).cxx_destruct;
- (id)context;
- (id)name;
- (id)object;
- (unsigned long long)options;
- (void)setContext:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;

@end
