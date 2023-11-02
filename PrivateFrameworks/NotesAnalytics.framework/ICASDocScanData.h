
@interface ICASDocScanData : NSObject <AADataEventType> {
    ICASDocScanActionType * _docScanActionType;
    NSString * _docScanID;
    ICASDocScanStage * _docScanStage;
}

@property (nonatomic, readonly) ICASDocScanActionType *docScanActionType;
@property (nonatomic, readonly) NSString *docScanID;
@property (nonatomic, readonly) ICASDocScanStage *docScanStage;

+ (id)dataName;

- (void).cxx_destruct;
- (id)docScanActionType;
- (id)docScanID;
- (id)docScanStage;
- (id)initWithDocScanID:(id)arg1 docScanActionType:(id)arg2 docScanStage:(id)arg3;
- (id)toDict;

@end
