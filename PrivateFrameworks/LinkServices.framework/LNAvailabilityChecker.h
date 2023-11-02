
@interface LNAvailabilityChecker : NSObject {
    NSDictionary * _availabilityAnnotations;
}

@property (nonatomic, readonly) NSDictionary *availabilityAnnotations;

- (void).cxx_destruct;
- (id)availabilityAnnotations;
- (id)availabilityWithPlatform:(id)arg1 platformVersion:(id)arg2;
- (id)initWithAvailabilityAnnotations:(id)arg1;

@end
