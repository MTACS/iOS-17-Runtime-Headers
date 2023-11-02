
@interface UMUserSyncTask : UMTask {
    unsigned long long  _contentSize;
}

@property (nonatomic) unsigned long long contentSize;

- (unsigned long long)contentSize;
- (void)setContentSize:(unsigned long long)arg1;

@end
