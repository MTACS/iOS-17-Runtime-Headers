
@interface CSStateCaptureOptions : NSObject {
    NSDictionary * _stateData;
    NSString * _stateDataTitle;
}

@property (nonatomic, readonly) NSDictionary *stateData;
@property (nonatomic, readonly) NSString *stateDataTitle;

- (void).cxx_destruct;
- (id)initWithMutableBuilder:(id /* block */)arg1;
- (id)stateData;
- (id)stateDataTitle;

@end
