
@interface BlastDoorLocationCoordinate2D : NSObject {
    void locationCoordinate2D;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;

- (id)description;
- (id)init;
- (double)latitude;
- (double)longitude;

@end
