
@interface PHImportAssetNameDescription : NSObject {
    NSString * _filename;
    NSString * _uuid;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithFileName:(id)arg1 uuid:(id)arg2;
- (id)redactedDescription;

@end
