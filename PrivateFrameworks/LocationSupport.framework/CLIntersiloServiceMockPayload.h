
@interface CLIntersiloServiceMockPayload : NSObject {
    XCTestExpectation * _expectation;
    bool  _inUse;
    NSDictionary * _inputDictionary;
    NSDictionary * _outputDictionary;
}

@property (nonatomic, readonly) XCTestExpectation *expectation;
@property (nonatomic) bool inUse;
@property (nonatomic, readonly) NSDictionary *inputDictionary;
@property (nonatomic, readonly) NSDictionary *outputDictionary;

- (void).cxx_destruct;
- (id)expectation;
- (bool)inUse;
- (id)initWithExpectation:(id)arg1 inputDictionary:(id)arg2;
- (id)inputDictionary;
- (id)outputDictionary;
- (void)setInUse:(bool)arg1;
- (void)setOutput:(id)arg1 forKey:(id)arg2;

@end
