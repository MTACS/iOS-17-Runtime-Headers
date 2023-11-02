
@interface CSStateCaptureOptionsMutable : NSObject <CSStateCaptureOptionsMutablity> {
    NSDictionary * _stateData;
    NSString * _stateDataTitle;
}

@property (nonatomic, readonly) NSDictionary *stateData;
@property (nonatomic, readonly) NSString *stateDataTitle;

- (void).cxx_destruct;
- (void)setStateData:(id)arg1;
- (void)setStateDataTitle:(id)arg1;
- (id)stateData;
- (id)stateDataTitle;

@end
