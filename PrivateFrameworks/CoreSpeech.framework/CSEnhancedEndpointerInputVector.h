
@interface CSEnhancedEndpointerInputVector : NSObject {
    MLMultiArray * _mlInputVector;
}

@property (nonatomic, retain) MLMultiArray *mlInputVector;

- (void).cxx_destruct;
- (id)initWithShape:(id)arg1;
- (id)mlInputVector;
- (void)populateVector:(id)arg1;
- (void)setMlInputVector:(id)arg1;

@end
