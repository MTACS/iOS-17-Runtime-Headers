
@interface ICASDocScanSnapshotItemData : NSObject <AADataEventType> {
    NSNumber * _docScanLength;
}

@property (nonatomic, readonly) NSNumber *docScanLength;

+ (id)dataName;

- (void).cxx_destruct;
- (id)docScanLength;
- (id)initWithDocScanLength:(id)arg1;
- (id)toDict;

@end
