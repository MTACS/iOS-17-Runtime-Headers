
@interface BKSHIDEventProximityAttributes : BKSHIDEventBaseAttributes {
    int  _proximityDetectionMode;
}

@property (nonatomic) int proximityDetectionMode;

+ (id)protobufSchema;

- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (int)proximityDetectionMode;
- (void)setProximityDetectionMode:(int)arg1;

@end
