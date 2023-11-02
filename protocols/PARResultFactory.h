
@protocol PARResultFactory <NSObject>

@required

- (NSObject<SFSearchResult> *)createResultObject;

@end
