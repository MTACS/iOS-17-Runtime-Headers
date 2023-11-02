
@interface CPLPlaceholderRecord : NSObject {
    Class  _recordClass;
    NSString * _relatedIdentifier;
    Class  _relatedRecordClass;
    CPLScopedIdentifier * _scopedIdentifier;
}

@property (nonatomic, readonly) Class recordClass;
@property (nonatomic, readonly) NSString *relatedIdentifier;
@property (nonatomic, readonly) Class relatedRecordClass;
@property (nonatomic, readonly) CPLScopedIdentifier *relatedScopedIdentifier;
@property (nonatomic, readonly) CPLScopedIdentifier *scopedIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRecord:(id)arg1;
- (id)initWithRecordClass:(Class)arg1 scopedIdentifier:(id)arg2 relatedRecordClass:(Class)arg3 relatedIdentifier:(id)arg4;
- (Class)recordClass;
- (id)redactedDescription;
- (id)relatedIdentifier;
- (Class)relatedRecordClass;
- (id)relatedScopedIdentifier;
- (id)scopedIdentifier;
- (id)translateToClientRecordUsingIDMapping:(id)arg1;
- (id)translateToCloudRecordUsingIDMapping:(id)arg1;

@end
