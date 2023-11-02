
@protocol SNTwoPassRequest <SNRequest>

@required

- (<SNSecondPassController> *)createSecondPassController;
- (SNTwoPassConfiguration *)twoPassConfiguration;

@end
