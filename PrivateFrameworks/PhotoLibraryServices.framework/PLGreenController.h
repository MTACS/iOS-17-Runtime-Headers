
@interface PLGreenController : NSObject {
    NSDictionary * _currentGreenValues;
}

@property (nonatomic, readonly) NSDictionary *currentGreenValues;

- (void).cxx_destruct;
- (id)currentGreenValues;
- (bool)greenValuesSimilarToGreenValues:(id)arg1;
- (id)init;
- (bool)isGreenStateValid;
- (void)readValuesFromDisk;

@end
