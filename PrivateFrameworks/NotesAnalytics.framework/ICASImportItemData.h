
@interface ICASImportItemData : NSObject <AADataEventType> {
    ICASImportFileType * _importFileType;
    NSNumber * _importItemCount;
}

@property (nonatomic, readonly) ICASImportFileType *importFileType;
@property (nonatomic, readonly) NSNumber *importItemCount;

+ (id)dataName;

- (void).cxx_destruct;
- (id)importFileType;
- (id)importItemCount;
- (id)initWithImportFileType:(id)arg1 importItemCount:(id)arg2;
- (id)toDict;

@end
