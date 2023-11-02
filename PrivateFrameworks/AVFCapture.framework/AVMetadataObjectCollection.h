
@interface AVMetadataObjectCollection : NSObject {
    NSSet * _handledMetadataObjectTypes;
    NSSet * _metadataObjectTypes;
    NSArray * _metadataObjects;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

@property (readonly) NSSet *handledMetadataObjectTypes;
@property (readonly) NSSet *metadataObjectTypes;
@property (readonly) NSArray *metadataObjects;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

+ (id)collectionWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 metadataObjectTypes:(id)arg2 handledMetadataObjectTypes:(id)arg3 metadataObjects:(id)arg4;

- (void)dealloc;
- (id)handledMetadataObjectTypes;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 metadataObjectTypes:(id)arg2 handledMetadataObjectTypes:(id)arg3 metadataObjects:(id)arg4;
- (id)metadataObjectTypes;
- (id)metadataObjects;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
