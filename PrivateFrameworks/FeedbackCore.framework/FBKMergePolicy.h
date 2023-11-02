
@interface FBKMergePolicy : NSMergePolicy {
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long type;

- (id)initWithType:(unsigned long long)arg1;
- (bool)resolveConflicts:(id)arg1 error:(id*)arg2;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
