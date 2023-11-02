
@interface ICASImportData : NSObject <AADataEventType> {
    NSArray * _importSummary;
}

@property (nonatomic, readonly) NSArray *importSummary;

+ (id)dataName;

- (void).cxx_destruct;
- (id)importSummary;
- (id)initWithImportSummary:(id)arg1;
- (id)toDict;

@end
