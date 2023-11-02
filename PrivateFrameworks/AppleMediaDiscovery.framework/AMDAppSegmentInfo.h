
@interface AMDAppSegmentInfo : NSObject {
    NSString * _appIdentifier;
    NSSet * _segments;
}

@property (retain) NSString *appIdentifier;
@property (retain) NSSet *segments;

- (void).cxx_destruct;
- (id)appIdentifier;
- (id)initWithAppIdentifier:(id)arg1 andSegments:(id)arg2;
- (bool)isEqualToApp:(id)arg1;
- (id)segments;
- (void)setAppIdentifier:(id)arg1;
- (void)setSegments:(id)arg1;

@end
