
@interface ICASImportFileType : NSObject <AADataType> {
    long long  _importFileType;
}

@property (nonatomic, readonly) long long importFileType;

- (long long)importFileType;
- (id)initWithImportFileType:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
