
@interface AMSFairPlayContext : NSObject {
    unsigned int  _contextID;
}

@property (nonatomic) unsigned int contextID;

- (unsigned int)contextID;
- (void)dealloc;
- (void)destroyContext;
- (unsigned int)fairplayContextIDWithError:(id*)arg1;
- (id)init;
- (void)setContextID:(unsigned int)arg1;

@end
