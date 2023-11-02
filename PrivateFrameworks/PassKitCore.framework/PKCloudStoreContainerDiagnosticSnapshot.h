
@interface PKCloudStoreContainerDiagnosticSnapshot : NSObject <NSSecureCoding> {
    NSDictionary * _localRecordIDs;
    NSDictionary * _recordIDs;
}

@property (nonatomic, readonly) NSDictionary *localRecordIDs;
@property (nonatomic, readonly) NSDictionary *recordIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordIDs:(id)arg1 localRecordIDs:(id)arg2;
- (id)localRecordIDs;
- (id)recordIDs;

@end
