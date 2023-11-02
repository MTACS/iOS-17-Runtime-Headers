
@interface MTLCounterSampleBufferDescriptor : NSObject <NSCopying>

@property (retain) <MTLCounterSet> *counterSet;
@property (copy) NSString *label;
@property unsigned long long sampleCount;
@property unsigned long long storageMode;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
