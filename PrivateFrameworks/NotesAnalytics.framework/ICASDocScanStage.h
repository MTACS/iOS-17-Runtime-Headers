
@interface ICASDocScanStage : NSObject <AADataType> {
    long long  _docScanStage;
}

@property (nonatomic, readonly) long long docScanStage;

- (long long)docScanStage;
- (id)initWithDocScanStage:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
