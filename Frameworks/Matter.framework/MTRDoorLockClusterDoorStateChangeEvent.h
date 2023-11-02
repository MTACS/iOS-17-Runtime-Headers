
@interface MTRDoorLockClusterDoorStateChangeEvent : NSObject <NSCopying> {
    NSNumber * _doorState;
}

@property (nonatomic, copy) NSNumber *doorState;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)doorState;
- (id)init;
- (void)setDoorState:(id)arg1;

@end
