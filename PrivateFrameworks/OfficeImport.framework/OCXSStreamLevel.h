
@interface OCXSStreamLevel : NSObject {
    int  mDepth;
    const char * mName;
}

@property (nonatomic) int depth;
@property (nonatomic) const char *name;

- (int)depth;
- (const char *)name;
- (void)setDepth:(int)arg1;
- (void)setName:(const char *)arg1;

@end
