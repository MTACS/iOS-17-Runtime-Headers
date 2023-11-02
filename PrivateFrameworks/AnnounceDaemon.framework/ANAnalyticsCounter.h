
@interface ANAnalyticsCounter : NSObject {
    unsigned int  _count;
    unsigned long long  _hexCount;
}

@property (nonatomic) unsigned int count;
@property (nonatomic) unsigned long long hexCount;

- (void)append:(unsigned long long)arg1;
- (unsigned int)count;
- (void)finished;
- (unsigned long long)hexCount;
- (id)init;
- (id)initWithHexCount:(unsigned long long)arg1;
- (id)payload:(id)arg1 keyTwo:(id)arg2;
- (void)setCount:(unsigned int)arg1;
- (void)setHexCount:(unsigned long long)arg1;

@end
