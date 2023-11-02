
@interface DTSysmonCoalitionRecord : NSObject {
    NSArray * _attributes;
    unsigned long long  _cid;
}

@property (nonatomic, retain) NSArray *attributes;
@property (nonatomic) unsigned long long cid;

- (void).cxx_destruct;
- (id)attributes;
- (unsigned long long)cid;
- (void)setAttributes:(id)arg1;
- (void)setCid:(unsigned long long)arg1;

@end
