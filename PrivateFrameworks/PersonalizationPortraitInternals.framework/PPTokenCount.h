
@interface PPTokenCount : NSObject {
    unsigned int  _count;
    NSString * _token;
}

@property (nonatomic) unsigned int count;
@property (nonatomic, retain) NSString *token;

- (void).cxx_destruct;
- (unsigned int)count;
- (id)initWithToken:(id)arg1 count:(unsigned int)arg2;
- (void)setCount:(unsigned int)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
