
@protocol SXDataTableTextSourceFactory <NSObject>

@required

- (SXDataTableTextSource *)textSourceWithFormattedText:(SXFormattedText *)arg1 indexPath:(struct { unsigned long long x1; unsigned long long x2; })arg2 dataSource:(id <SXTextSourceDataSource>)arg3;

@end
