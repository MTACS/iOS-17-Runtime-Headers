
@interface _MPMusicPlayerQueueItemsProxy : NSArray {
    MPMusicPlayerApplicationController * _controller;
}

@property (nonatomic, readonly) MPMusicPlayerApplicationController *controller;

- (void).cxx_destruct;
- (id)controller;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)initWithController:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;

@end
