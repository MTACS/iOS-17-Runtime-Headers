
@interface DTSysmonProcessRecord : NSObject {
    NSArray * _attributes;
    int  _pid;
}

@property (nonatomic, retain) NSArray *attributes;
@property (nonatomic) int pid;

- (void).cxx_destruct;
- (id)attributes;
- (int)pid;
- (void)setAttributes:(id)arg1;
- (void)setPid:(int)arg1;

@end
