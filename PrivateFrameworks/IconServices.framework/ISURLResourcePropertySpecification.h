
@interface ISURLResourcePropertySpecification : NSObject {
    NSSet * _allowedMissingProperties;
    NSArray * _applicationProperties;
    NSArray * _generalProperties;
    NSArray * _otherProperties;
    NSArray * _volumeProperties;
}

@property (readonly) NSSet *allowedMissingProperties;
@property (readonly) NSArray *applicationProperties;
@property (readonly) NSArray *generalProperties;
@property (readonly) NSArray *iconInitWithURLProperties;
@property (readonly) NSArray *otherProperties;
@property (readonly) NSArray *volumeProperties;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)allowedMissingProperties;
- (id)applicationProperties;
- (id)generalProperties;
- (id)iconInitWithURLProperties;
- (id)otherProperties;
- (id)volumeProperties;

@end
