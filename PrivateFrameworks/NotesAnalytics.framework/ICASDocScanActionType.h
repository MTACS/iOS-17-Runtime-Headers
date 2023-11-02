
@interface ICASDocScanActionType : NSObject <AADataType> {
    long long  _docScanActionType;
}

@property (nonatomic, readonly) long long docScanActionType;

- (long long)docScanActionType;
- (id)initWithDocScanActionType:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
