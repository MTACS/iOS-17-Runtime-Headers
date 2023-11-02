
@interface PKCloudRecordAssetURL : PKCloudRecordObject {
    NSData * _data;
    int  _fd;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIncludeItem:(bool)arg1;
- (id)assetData;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithItem:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecords:(id)arg1;

@end
