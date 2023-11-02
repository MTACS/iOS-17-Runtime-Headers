
@interface AVTCoreModelFramingModeOverrides : NSObject {
    NSArray * _orderedFramingModeOverrides;
    NSArray * _orderedTags;
}

@property (nonatomic, readonly) NSArray *orderedFramingModeOverrides;
@property (nonatomic, readonly) NSArray *orderedTags;

- (void).cxx_destruct;
- (id)initWithCameraOverrides:(id)arg1;
- (id)orderedFramingModeOverrides;
- (id)orderedTags;

@end
